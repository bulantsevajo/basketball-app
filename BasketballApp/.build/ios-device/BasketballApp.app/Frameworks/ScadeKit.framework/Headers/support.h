//
//  runtime.h
//  ScadeSDK
//
//  Created by Grigory Markin on 02/02/16.
//  Copyright © 2016 Scade. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>


@class EPackage;
@class EObject;
@class EStructuralFeature;


@protocol SCDApplication

@property (nonatomic,readonly) NSString* moduleName;

@end



@interface SCDRuntime : NSObject

+(void) initRuntime:(id<SCDApplication>) app;

+(EPackage*) loadMetaModel:(NSString*)relativePath;

+(EObject*) loadResource:(NSString*)relativePath;

+(EObject*) loadDocument:(NSString*)relativePath;

+(void) saveDocument:(NSString*)relativePath document:(EObject*) eObject;

+(void) saveFile:(NSString*)relativePath content:(NSString*) data;

+(NSString*) loadFile:(NSString*)relativePath;

+(void) callWithDelay:(double)seconds closure:(void (^)()) block;

//#if DEBUG
+(EObject*) parseSvg:(NSString*)relativePath;

#ifdef __APPLE__
+(void) renderSvg:(EObject*)object rect:(CGRect) rectangle;
#endif // __APPLE__
//#endif //DEBUG


@end

@interface SCDDisplay : NSObject

+(CGSize) getSize;

+(void) frameChanged:(CGSize) size;

@end


// Ecore notification

typedef NS_ENUM(NSInteger, SCDNotificationType) {
  SCD_NOTIFICATION_CREATE, //deprecated
  SCD_NOTIFICATION_SET,
  SCD_NOTIFICATION_UNSET,
  SCD_NOTIFICATION_ADD,
  SCD_NOTIFICATION_REMOVE,
  SCD_NOTIFICATION_ADD_MANY,
  SCD_NOTIFICATION_REMOVE_MANY,
  SCD_NOTIFICATION_MOVE,
  SCD_NOTIFICATION_REMOVING_ADAPTER,
  SCD_NOTIFICATION_RESOLVE,
  SCD_NOTIFICATION_EVENT_TYPE_COUNT,
  SCD_NOTIFICATION_UNKNOWN
};



@interface SCDNotification : NSObject

-(instancetype)init NS_UNAVAILABLE;

@property(nonatomic, readonly) EObject* notifier;

@property(nonatomic, readonly) EStructuralFeature* feature;

@property(nonatomic, readonly) SCDNotificationType type;

@property(nonatomic, readonly) id value;

@property(nonatomic, readonly) id oldValue;

@property(nonatomic, readonly) NSUInteger position;

@property(nonatomic, readonly) id key;

@end



@interface SCDNotificationAdapter : NSObject

-(instancetype)init NS_UNAVAILABLE;

-(instancetype)initWithHandler:(void(^)(SCDNotification*))_;

@end

