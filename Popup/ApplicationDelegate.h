#import "MenubarController.h"
#import "PanelController.h"

@interface ApplicationDelegate : NSObject <NSApplicationDelegate, PanelControllerDelegate> {
    MenubarController *_menubarController;
    PanelController *_panelController;
}

@property (nonatomic, strong) MenubarController *menubarController;
@property (nonatomic, unsafe_unretained, readonly) PanelController *panelController;

- (IBAction)togglePanel:(id)sender;

@end
