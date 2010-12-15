<?php
// $Id$

/**
 * @file
 * @brief
 * Form settings for spell checker
 *
 * @package     spellchecker
 * @subpackage
 * @author      Rafal Wieczorek
 */

/**
 * Menu callback for the settings form.
 */
function spellchecker_enchant_get_admin_form() {
  $form = array();
  return system_settings_form($form);
}

