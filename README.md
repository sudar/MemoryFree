MemoryFree
==========

An Arduino library, that allows you to keep track of the amount of free memory that is available at runtime.

Why do you need to track of memory?
-----------------------------------

When you try to push the boundaries of Arduino, by doing complex stuff like [parsing JSON](http://hardwarefun.com/tutorials/parsing-json-in-arduino) or [making YQL request](http://hardwarefun.com/tutorials/accessing-yql-from-arduino) you would need to keep a close eye on the amount of memory used. This library allows you to do it dynamically, which would help you to debug memory related issues in your Arduino program.

Usage
---------------

Refer to the examples under the examples folder to find out how to use this library.

License
-------

The source code and the config files are released under "THE BEER-WARE" license.

I would, however, consider it a great courtesy if you could email me and tell me about your project and how this code was used, just for my own continued personal gratification :)

You can also find other ways to [make me happy](http://sudarmuthu.com/if-you-wanna-thank-me), if you liked this project ;)

Contribution
-------------

If you would like to contribute to this project, then just fork it in github and send a pull request. 

Credits
-------------

The library uses code from the following places and the credit goes to the original authors. I have merged code from different places and have put together a nice example and readme :)

- Original code was from this [forum post](http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1213583720/19#19)
- Minimum RAM Check was picked up from [USB Host library](http://github.com/ribbotson/USB-Host/tree/master/Memory_Free/)
