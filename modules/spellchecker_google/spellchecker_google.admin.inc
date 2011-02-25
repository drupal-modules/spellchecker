<?php

/**
 * @file
 * @brief
 * Implements spellchecker for Drupal
 *
 * @package     spellchecker
 * @subpackage
 * @author
 */

/**
 * Menu callback for the settings form.
 */
function spellchecker_google_get_admin_form() {
  $form = array();

  return system_settings_form($form);
}

