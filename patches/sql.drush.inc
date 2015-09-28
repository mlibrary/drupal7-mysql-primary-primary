diff -ur commands/sql/sql.drush.inc commands/sql/sql.drush.inc
--- commands/sql/sql.drush.inc 2015-09-28 11:19:19.371322318 -0400
+++ commands/sql/sql.drush.inc 2015-03-25 22:02:45.000000000 -0400
@@ -571,6 +571,7 @@
   switch (_drush_sql_get_scheme($db_spec)) {
     case 'mysqli':
     case 'mysql':
+    case 'primary_primary':
       $exec = 'mysqldump';
       if ($file) {
         $exec .= ' --result-file '. $file;
@@ -1480,6 +1481,7 @@
   $schema = _drush_sql_get_scheme($db_spec);
   switch ($schema) {
     case 'mysql':
+    case 'primary_primary':
       $dbname = $quoted ? '`' . $db_spec['database'] . '`' : $db_spec['database'];
       $sql[] = sprintf('DROP DATABASE IF EXISTS %s;', $dbname);
       $sql[] = sprintf('CREATE DATABASE %s /*!40100 DEFAULT CHARACTER SET utf8 */;', $dbname);
@@ -1522,6 +1524,7 @@
   // We need the output back so we can't use drush_sql_query().
   switch ($db_spec['driver']) {
     case 'mysql':
+    case 'primary_primary':
       $sql = "SELECT 1;";
       // Suppress ugly output. Redirect STDERR and STDOUT. We just need exit code.
       $bit_bucket = drush_bit_bucket();
@@ -1545,6 +1548,7 @@
   $exec = '';
   switch ($scheme) {
     case 'mysql':
+    case 'primary_primary':
       $exec = 'mysql';
       $exec .= _drush_sql_get_credentials($db_spec);
       $exec .= ' ' . drush_get_option('extra');
