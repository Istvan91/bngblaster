+-----------------------------------+----------------------------------------------------------------------+
| Command                           | Description                                                          |
+===================================+======================================================================+
| **stream-stats**                  | | Display stream traffic statistics.                                 |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-info**                   | | Display stream/flow information.                                   |
|                                   | |                                                                    |
|                                   | | **Arguments:**                                                     |
|                                   | | ``flow-id``                                                        |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-summary**                | | Display stream/flow summary information.                           |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-traffic-start**          | | Enable/start traffic streams bound to sessions.                    |
|                                   | |                                                                    |
|                                   | | **Arguments:**                                                     |
|                                   | | ``session-id``                                                     |
|                                   | | ``session-group-id``                                               |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-traffic-stop**           | | Disable/stop traffic streams bound to sessions.                    |
|                                   | |                                                                    |
|                                   | | **Arguments:**                                                     |
|                                   | | ``session-id``                                                     |
|                                   | | ``session-group-id``                                               |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-reset**                  | | Reset all traffic streams.                                         |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-start**                  | | Enable/start traffic streams/flows. This command also applies to   |
|                                   | | RAW stream which are not bould to sessions.                        |
|                                   | |                                                                    |
|                                   | | **Arguments:**                                                     |
|                                   | | ``session-id``                                                     |
|                                   | | ``session-group-id``                                               |
|                                   | | ``flow-id``                                                        |
+-----------------------------------+----------------------------------------------------------------------+
| **stream-stop**                   | | Disable/stop traffic streams/flows. This command also applies to   |
|                                   | | RAW stream which are not bould to sessions.                        |
|                                   | |                                                                    |
|                                   | | **Arguments:**                                                     |
|                                   | | ``session-id``                                                     |
|                                   | | ``session-group-id``                                               |
|                                   | | ``flow-id``                                                        |
+-----------------------------------+----------------------------------------------------------------------+
| **streams-pending**               | | List flow-id of all pending (not verfied) traffic streams.         |
+-----------------------------------+----------------------------------------------------------------------+