//
//  SLManager.h
//  Seamless
//
//  Created by Mehmet Can Yavuz on 26.05.2014.
//  Copyright (c) 2014 mobilike. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MPAdView;
@class SLAd;
typedef enum{
    SLCategoryUncategorised,
    SLCategoryArt,
    SLCategoryEntertainment,
    SLCategoryAutomotive,
    SLCategoryBusiness,
    SLCategoryCareers,
    SLCategoryEducation,
    SLCategoryFamily,
    SLCategoryHealth,
    SLCategoryFood,
    SLCategoryHobbies,
    SLCategoryHome,
    SLCategoryPolitics,
    SLCategoryNews,
    SLCategoryScience,
    SLCategoryPets,
    SLCategorySports,
    SLCategoryFashion,
    SLCategoryTechnology,
    SLCategoryTravel,
    SLCategoryRealEstate,
    SLCategoryShopping,
    SLCategoryWeather,
    SLCategoryAstrology,
    SLCategoryWomen,
    SLCategoryMen
}SLCategory;

@interface SLManager : NSObject

@property (nonatomic) float insertTimer;
@property (nonatomic) float finishHandlerTimer;
@property (nonatomic) int insertType;
@property (nonatomic, copy) NSString *appToken;
@property (nonatomic) BOOL locationEnabled;

+(SLManager*)sharedManager;
+(NSString *) versiyon;

-(void)getAdsWithEntity:(NSString*)entity
               category:(SLCategory)category
                   type:(NSString*)type
           successBlock:(void(^)(NSMutableArray * ads))successBlock
           failureBlock:(void(^)(NSError * error))failureBlock;

-(void)getAdTargetingWithAdView:(MPAdView*)adView
                         entity:(NSString*)entity
                       category:(SLCategory)category
                   successBlock:(void(^)(MPAdView * adView))successBlock
                   failureBlock:(void(^)(NSError * error))failureBlock;

-(void)addAdManager:(id)adManager;

-(void)removeAdManager:(id)adManager;
@end
