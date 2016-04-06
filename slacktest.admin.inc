<?php

/**
 * @file
 * Administration page callbacks for the Slacktest module.
 */

/**
 * Slacktest settings form.
 */
function slacktest_admin_settings() {
  $form['slacktest_endpoint'] = array(
    '#type' => 'textfield',
    '#title' => t('Slacktest API endpoint'),
    '#default_value' => variable_get('slacktest_endpoint', 'https://slack.com/api'),
    '#required' => TRUE,
  );
  $form['slacktest_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Slacktest API token'),
    '#default_value' => variable_get('slacktest_token', 'xoxp-17927409061-17931392934-17932326240-9b909ecca3'),
    '#required' => TRUE,
  );
  $form['slacktest_channel'] = array(
    '#type' => 'textfield',
    '#title' => t('Slacktest channel'),
    '#default_value' => variable_get('slacktest_channel', 'C0HT9C22Z'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
