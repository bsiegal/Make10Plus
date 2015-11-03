/*******************************************************************************
 *
 * Copyright 2013 Bess Siegal
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#import "cocos2d.h"

@interface SettingsLayer : CCLayer <UIPickerViewDelegate> {
    UISwipeGestureRecognizer* _swipeLeftRecognizer;
    UISwipeGestureRecognizer* _swipeRightRecognizer;
}

@property (retain) UISwipeGestureRecognizer* swipeRightRecognizer;
@property (retain) UISwipeGestureRecognizer* swipeLeftRecognizer;

/**
 * returns a CCScene that contains the SettingsLayer as the only child
 */
+(CCScene *) scene;

@end