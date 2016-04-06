<?php

/**
 * @file
 * Hooks provided by Slacktest module.
 */

/**
 * Alter messages received from Slack.
 */
function hook_slacktest_messages_alter(&$messages) {
  $text_to_replace = 'desire';
  foreach ($messages as &$message) {
    $message = str_replace($text_to_replace, l($text_to_replace . ' (link)', 'slacktest'), $message);
  }
}
