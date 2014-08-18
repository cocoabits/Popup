#define ARROW_WIDTH 12
#define ARROW_HEIGHT 8

@interface BackgroundView : NSView
{
@private
    NSInteger _arrowX;
    NSBezierPath* _path;
}

@property (nonatomic, assign) NSInteger arrowX;
@property (nonatomic, retain) NSBezierPath* path;

@end
