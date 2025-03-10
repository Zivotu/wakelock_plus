#if __has_include(<Flutter/Flutter.h>)
#import <Flutter/Flutter.h>
#else
#import "Flutter.h"
#endif

@interface WakelockPlusPlugin : NSObject<FlutterPlugin>
@end
