/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteManager : NSObject {
    <GEORouteManagerDelegate> * _delegate;
}

@property (nonatomic) <GEORouteManagerDelegate> *delegate;

+ (void)setShouldRequestServerLatencyInfo:(bool)arg1;

- (void).cxx_destruct;
- (void)addedRoutesToRouteSet:(id)arg1;
- (id)delegate;
- (void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
