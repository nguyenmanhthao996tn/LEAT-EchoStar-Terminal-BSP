This code can be used to connect to EM2050 with AT-command.

Typical command :

AT+JOIN   : To join the network


AT+SEND=1,0,8,0,text2send   : Send a text message converted in Hex


AT+TXPMSS=23 : Set the Tx power for uplink. from 0 to 27 (in dBm).
