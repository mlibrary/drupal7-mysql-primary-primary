# drupal7-mysql-primary-primary

Customizations for running Drupal 7 with primary-primary MySQL replication.

# Motivation

* primary-primary replication for MySQL eases problems associated with write-failover for primary-replica replication.
* primary-primary replication for MySQL introduces problems with duplicate keys due to concurrent writes.
* These changes ease problems with duplicate keys due to concurrent writes, but introduces its own:
  * Locking can fail silently.
  * Data integrity isn't guaranteed when there concurrent writes.
* These are deemed acceptable risks until distributed locking is implemented.

# Instructions

* Add files in includes to Drupal 7's includes directory.
* Include the code in sites/default/settings.php in the site's settings.php
* Patch the site's includes/update.inc with patch/update.inc.
* (optional) Install drush 6.6.0 (other versions may be harder to work with).
* (optional) Include, and modify the code in sites/default/drush.php in your sites/default/drush.php.
* (optional) Patch your local drush 6.6.0 with patch/sql.drush.inc.

Copyright (c) 2015, Regents of the University of Michigan.  
All rights reserved. See LICENSE.txt for details.
