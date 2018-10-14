// This object handles Superpowered.
// Compare the source to CoreAudio.mm and see how much easier it is to understand.


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Superpowered: NSObject {
@public
    bool playing;
    uint64_t avgUnitsPerSecond, maxUnitsPerSecond;
}

// Updates the user interface according to the file player's state.
- (void)updatePlayerLabel:(UILabel *)label slider:(UISlider *)slider button:(UIButton *)button;
- (void)togglePlayback; // Play/pause.
- (void)play; // Play.
- (void)pause; // Pause.
- (void)seekTo:(float)percent; // Jump to a specific position.
- (void)setTempo:(float)tempo; // Change tempo(speed rate).
- (void)toggle; // Start/stop Superpowered.
- (void)setSong:(NSURL*)url; // Set song.
- (void)setLoop:(bool)isLoop; // Loop setting.

@end
