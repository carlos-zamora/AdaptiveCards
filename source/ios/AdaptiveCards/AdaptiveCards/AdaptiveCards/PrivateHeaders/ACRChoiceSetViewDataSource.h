//
//  ACRChoiceSetViewDataSource
//  ACRChoiceSetViewDataSource.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#import <AdaptiveCards/ACOBaseCardElement.h>
#import <AdaptiveCards/ACRIBaseInputHandler.h>
#import <AdaptiveCards/ChoiceInput.h>
#import <AdaptiveCards/ChoiceSetInput.h>
#import <AdaptiveCards/HostConfig.h>
#import <UIKit/UIKit.h>

extern NSString *checkedCheckboxReuseID;
extern NSString *uncheckedCheckboxReuseID;
extern NSString *checkedRadioButtonReuseID;
extern NSString *uncheckedRadioButtonReuseID;

@interface ACRChoiceSetCell : UITableViewCell
@end

@interface ACRChoiceSetViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, ACRIBaseInputHandler>
@property NSString *id;
@property BOOL isMultiChoicesAllowed;
@property ACRContainerStyle parentStyle;
@property CGFloat spacing;

- (instancetype)initWithInputChoiceSet:(std::shared_ptr<AdaptiveCards::ChoiceSetInput> const &)choiceSet WithHostConfig:(std::shared_ptr<AdaptiveCards::HostConfig> const &)hostConfig;


- (void)getDefaultInput:(NSMutableDictionary *)dictionary;

- (NSString *)getTitlesOfChoices;

- (float)getNonInputWidth:(UITableViewCell *)cell;

@end
