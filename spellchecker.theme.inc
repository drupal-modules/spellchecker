<?php
// $Id$
/**
* @file
* Theme file for the Spellchecker module
*/

/**
 * Highlight (part of) a string.
 *
 * @param $string
 *   The (part of the) string to highlight.
 *
 * @return
 *   The highlighted (part of the) string.
 */
function theme_spellchecker_node_string_highlight($string, $suggestions) {
  return '<span class="spellcheck-error" title="' . $suggestions . '">' . $string . '</span>';
}

