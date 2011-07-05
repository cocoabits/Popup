#import "MenubarController.h"
#import "PanelController.h"

@interface ApplicationDelegate : NSObject <NSApplicationDelegate, PanelControllerDelegate> {
@private
    MenubarController *_menubarController;
    PanelController *_panelController;
}

@property (nonatomic, retain) MenubarController *menubarController;
@property (nonatomic, readonly) PanelController *panelController;

- (IBAction)togglePanel:(id)sender;

@end
