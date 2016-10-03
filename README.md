cbp_HALMX_2 
=============  

##Notice

This software is experimental and a work in progress.
Under no circumstances should these files be used in relation to any critical system(s).
Use of these files is at your own risk.


##Summary:  
This repository is a testbed for combining the new STM core with Arduino IDE version 1.6.9 and Cobe::Blocks. 


- [**Arduino_Core_STM32F1**](https://github.com/stm32duino/Arduino_Core_STM32F1) The new core for STM32 MCUs 
- [**Arduino IDE**](https://www.arduino.cc/en/Main/Software) (tested on 1.6.9)
  
##Developer
- Vassilis Serasidis (https://github.com/Serasidis)
- [http://www.serasidis.gr](http://www.serasidis.gr)

##Using it with Code::Blocks
- Download the CodeBlocks from [here](http://www.codeblocks.org/). Istall it on your machine (Windows - Linux - Mac OSX)  
- Run the `Codeblocks (launcher)` and open the `halmx_2.cbp` project file.

![](https://github.com/Serasidis/cbp_HALMX_2/blob/master/images/codeblocks.jpg)

1. Select the `build target` box.
2. Click on the `lib-MXBluePillF103C8` to select the library you want to create.
3. Click on the `Build` or `ReBuild` button to create a static library of the Core.  
4. Select the `Blink-MXBluePillF103C8` to compile the blink example code that blinks the on board LED on pin PC13.
![](https://github.com/Serasidis/cbp_HALMX_2/blob/master/images/codeblocks_stlink.jpg)
 6. Select `Tools`
 7. Click on `ST-LINK 8000000` to burn the bin file into the MCU flash memory through [ST-Link programmer-debugger](http://www.ebay.com/sch/i.html?_sacat=0&_nkw=st-link%2Fv2&_frs=1).

##Using it with Arduino IDE 1.6.9 or later
- Just extract the folder `cbp_HALMX_2` into Arduino IDE Hardware folder.

![](https://github.com/Serasidis/cbp_HALMX_2/blob/master/images/arduino_ide.jpg) 

1. Select `Board'
2. Select `BluePil-F103C8`
3. Make sure the upload method is `STLink`

##Credits
- A big thanks to [Evangelos Arkalis](https://github.com/evark) for helping me to understand the CodeBlocks setup process.
- A big thanks goes also to the [STM32duino](http://www.stm32duino.com) community (and especially to **Roger Clark**) for their STM32 support.

##Roadmap

---
`3 October 2016 ` **[ Initial release ]** 

