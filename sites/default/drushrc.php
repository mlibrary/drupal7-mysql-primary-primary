<?php
/**
 * @file
 * Code to add and modify for drushrc.php.
 *
 * Copyright (c) 2015, Regents of the University of Michigan.  
 * All rights reserved. See LICENSE.txt for details.
 *
 */

if ($_SERVER['PHP_SELF'] && $_SERVER['PHP_SELF'] == '/normal/path/to/drush') {
  pcntl_exec('/alternative/path/to/drush', array_slice($_SERVER['argv'], 1));
}
