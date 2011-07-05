#import "BackgroundView.h"
#import "StatusItemView.h"

@class PanelController;

@protocol PanelControllerDelegate <NSObject>

@optional

- (StatusItemView *)statusItemViewForPanelController:(PanelController *)controller;

@end

#pragma mark -

@interface PanelController : NSWindowController <NSWindowDelegate>
{
    BOOL _hasActivePanel;
    BackgroundView *_backgroundView;
    id<PanelControllerDelegate> _delegate;
    NSSearchField *_searchField;
    NSTextField *_textField;
}

@property (assign) IBOutlet BackgroundView *backgroundView;
@property (assign) IBOutlet NSSearchField *searchField;
@property (assign) IBOutlet NSTextField *textField;

@property (nonatomic, assign) BOOL hasActivePanel;
@property (nonatomic, readonly) id<PanelControllerDelegate> delegate;

- (id)initWithDelegate:(id<PanelControllerDelegate>)delegate;

- (void)openPanel;
- (void)closePanel;
- (NSRect)statusRectForWindow:(NSWindow *)window;

@end
