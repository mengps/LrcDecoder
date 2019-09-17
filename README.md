# LrcDecoder

  使用c++11简单实现的LRC(歌词)解码器

------

### 使用LrcDecoder:

 ```c++
    #include "lrcdecoder.h"
    
    int main(int argc, char *argv[])
    {
        LrcDecoder decoder;
        decoder.decode(string(argv[1]));
        decoder.dumpMetadata(stdout);
        decoder.dumpLyrics(stdout);
    }
 ```
#### 然后:
 ```sh
    .\lrcdecoder test.lrc
 ```
------

  开发环境windows 10

------