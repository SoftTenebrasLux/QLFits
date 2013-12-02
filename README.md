Provisioning
============

A Quick Look plug-in for .mobileprovision files (on iOS) and .provisionprofile files (on OS X).

A ZIP file with the latest version can be [downloaded from the Releases page](https://github.com/chockenberry/Provisioning/releases).

If you want to copy information from the Quick Look preview, you need to [change a hidden Finder preference](http://www.macworld.com/article/1164668/select_and_copy_text_within_quick_look_previews.html) using the command line:

	$ defaults write com.apple.finder QLEnableTextSelection -bool TRUE
	$ killall Finder

Thanks to [Pieter Claerhout](https://github.com/pieterclaerhout) for the OS X and profile type support.


Project Notes
-------------

* The plug-in code must be signed. The "Code Signing Identity" build setting is to the "Developer ID: *" automatic setting. If you don't have a Developer ID, get creative.

* There is a Copy Files build phase that puts the Debug build of Provisioning.qlgenerator in your ~/Library/QuickLook folder.

* The "Provisioning" scheme runs "qlmanage" with the -p argument set to "~/Library/MobileDevice/Provisioning\ Profiles/Iconfactory_Development.mobileprovision". You won't have this file, so change it to something you do have.

* QuickLook plug-ins sometimes don't like to install. Learn to use "qlmanage -r" to reset the daemon. Using "qlmanage -m plugins | grep mobileprovision" will tell you if the plug-in has been recognized. Sometimes you have to login and out before the plug-in is recognized.

* You can use the command-line to debug, as well. To dump of the output in a .qlpreview bundle, use: "qlmanage -p ~/Library/MobileDevice/Provisioning\ Profiles/Iconfactory_Development.mobileprovision -o /tmp/quicklook". You'll need to make the directory first.


