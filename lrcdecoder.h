#ifndef LRCDECODER_H
#define LRCDECODER_H

#include <string>
using std::string;

struct lyricsPacket {
    /** @brief 歌词*/
    string lyrics;
    /** @brief 显示时间戳 单位: ms*/
    int64_t pts;
};

class LrcDecoderPrivate;
class LrcDecoder
{
public:
    LrcDecoder();
    ~LrcDecoder();

    /**
     * @brief 开始解码
     * @param lrcFile LRC文件名
     * @return 成功返回true,否则返回false
     */
    bool decode(const string &lrcFile);

    /**
     * @brief 获取一个元数据
     * @param meta 元数据名称
     * @return 成功返回对应数据
     */
    string get(const string &meta);

    /**
     * @brief 转储元数据
     * @param out 目标文件指针
     */
    void dumpMetadata(FILE *out);

    /**
     * @brief 转储歌词
     * @param out 对应的文件指针
     */
    void dumpLyrics(FILE *out);

    /**
     * @brief 获取最后出现的错误
     * @return 描述错误的字符串
     */
    string lastError() const;

private:
    LrcDecoderPrivate *d;
};

#endif // LRCDECODER_H
