diff --git a/includes/update.inc b/includes/update.inc
index a17161c..fae3044 100644
--- a/includes/update.inc
+++ b/includes/update.inc
@@ -122,6 +122,9 @@ function update_prepare_d7_bootstrap() {
     $message = '<h2>The wrong version of PDO is installed!</h2><p>Drupal 7 requires the PHP Data Objects (PDO) extension from PHP core to be enabled. This system has the older PECL version installed.';
     $pdo_link = 'http://drupal.org/requirements/pdo#pecl';
   }
+  elseif (isset($databases['default']['default']['driver']) && $databases['default']['default']['driver'] == 'primary_primary') {
+    // primary_primary is a virtual database.
+  }
   // Check that the correct driver is loaded for the database being updated.
   // If we have no driver information (for example, if someone tried to create
   // the Drupal 7 $databases array themselves but did not do it correctly),
