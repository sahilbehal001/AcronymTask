//
//  ViewController.h
//  AssessmentTask
//
//  Created by Sahil Behal on 5/10/16.
//  Copyright © 2016 Sahil Behal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AcronymViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *acronymsTxtFld;
@property (weak, nonatomic) IBOutlet UITableView *tblView;

- (IBAction)searchBtnPressed:(id)sender;

@end

