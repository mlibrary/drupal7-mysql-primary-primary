<?php
/**
 * @file
 * Code to add to the end of the site's settings.php.
 *
 * Copyright (c) 2015, Regents of the University of Michigan.  
 * All rights reserved. See LICENSE.txt for details.
 *
 */

// Add this to the end of your settings.php.

if (file_exists(DRUPAL_ROOT . '/includes/settings-primary_primary.inc')) {
  require_once(DRUPAL_ROOT . '/includes/settings-primary_primary.inc');
}
