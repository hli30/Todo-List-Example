//
//  AddItemViewController.h
//  Todo List Lighthouse
//
//  Created by Harry Li on 2017-05-28.
//  Copyright © 2017 Harry. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

- (void)didSaveNewTodo:(NSString *)todoText;
@end

@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;

@end
