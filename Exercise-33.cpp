#include <iostream>
using namespace std;


class MediaPlayer {
public:
    virtual void play() const {
        cout << "Playing media." << endl;
    }
    virtual ~MediaPlayer() = default; 
};


class AudioPlayer : public MediaPlayer {
public:
    void play() const override {
        cout << "Playing audio files." << endl;
    }
};


class VideoPlayer : public MediaPlayer {
public:
    void play() const override {
        cout << "Playing video files." << endl;
    }
};


class StreamingPlayer : public MediaPlayer {
public:
    void play() const override {
        cout << "Streaming media content." << endl;
    }
};

int main() {
    AudioPlayer audioPlayer;
    VideoPlayer videoPlayer;
    StreamingPlayer streamingPlayer;

    audioPlayer.play();        
    videoPlayer.play();         
    streamingPlayer.play();     

    return 0;
}
