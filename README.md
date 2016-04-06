Slacktest module
==================================

# Requirements:

Integrate Slack into a Drupal website.
- The integration should show a list of the last 10 messages of a channel.
- The API endpoint should be adjustable in an admin page
- Provide a hook that retrieves the list of messages and is able to adjust the list of messages. (For example another module can add links for particular text in the message)

# Implementation:

Summary of performed actions:
* have created config page in 'admin/config/services/slacktest'
* have created a path 'slacktest' to demonstrate how the module works
* custom API hook was added to allow other modules modify Slack's messages
* have created theme function to separate logic from view.
* messages are ordered according to `ts` value
* NOTE: it was possible to create a Ctools plugin or Views display with Entities to display these messages, but that was not specified in the description of the task.
* NOTE: it was also possible to use Slack PHP client, but it is overkill for that task
