Drupal project page: http://drupal.org/project/spellchecker
GitHub project page: https://github.com/kenorb/spellchecker

DESCRIPTION:

  This module activate spell checker on edit screen.
  It's using jquery-spellcheck plugin for text fields.
  You have to activate spell checker in content type settings (admin/content/node-type/page) or for specified fields (cck).

  This module uses modified version of jquery-spellcheck plugin to support 'add' operation during typing.
  Plugin homepage: http://plugins.jquery.com/project/spellcheck
  Trigger custom events: http://plugins.jquery.com/node/9822
  This module supports spell checking of node content (including title, body and CCK fields).

FEATURES
  * spell checking in real-time for input and textarea,
  * integration with WYSIWYG,
  * learn new words,
  * Taxonomy as storage of custom words,
  * show spell errors on page load in TinyMCE editor,
  * easy selection of different engines,
  * no external PHP library required, you can use Google Spell API as alternative

INSTALLATION

  First of all, please read INSTALL.txt.
  You have to activate spell checker in content type settings (i.e. admin/content/node-type/page) or for specified fields (CCK).

WYSIWYG SpellCheck integration

  After installing WYSIWYG SpellCheck, Edit your WYSIWYG profile and activate Spell Check button (i.e. admin/settings/wysiwyg/profile/1/edit).

PSpell integration

  See: INSTALL.txt and also read PHP PSpell Installation Manual.

On Linux, simply try: sudo apt-get install php5-pspell aspell-en && sudo apachectl restart

SUPPORTED MODULES
  * CCK (for field spell checking),
  * WYSIWYG (tested with TinyMCE),
  * WYSIWYG SpellCheck (with TinyMCE spellchecker plugin),
  * Excerpt (for teaser)

  For wysiwyg editor:
    - wysiwyg (TinyMCE)
    - wysiwyg_spellcheck (TinyMCE spellchecker plugin)

  For teaser:
    - excerpt

SUPPORT
  It has support for following spell engines (configurable from settings page):
  * PHP PSpell (ASpell),
  * Google Spell Checker API (Google SOAP Search API),
  * Enchant,
  * jQuery Spell Check

  It has support for following storage engines (configurable from settings page):
  * Taxonomy
  * PSpell personal wordlist (text file)

  It uses following PHP libraries:
  * mbstring (optional),
  * PSpell (optional),
  * Enchant (optional)

DEVELOPERS
  Use hook_spellchecker() to define your custom spell engines and storage methods.

CREDITS
  This project was sponsored by the Department for Education (UK).

