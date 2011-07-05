#import "Panel.h"

@implementation Panel

- (BOOL)canBecomeKeyWindow;
{
    return YES;
}

- (void)flagsChanged:(NSEvent *)theEvent;
{
    [[self contentView] setNeedsDisplay:YES];
}

@end
