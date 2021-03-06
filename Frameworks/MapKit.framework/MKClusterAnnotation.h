/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKClusterAnnotation : NSObject <MKAnnotation> {
    NSString * _clusteringIdentifier;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSArray * _memberAnnotations;
    NSString * _subtitle;
    bool  _subtitleIsExplicitlyNil;
    NSString * _title;
}

@property (nonatomic, copy) NSString *clusteringIdentifier;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *memberAnnotations;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (bool)_isMKClusterAnnotation;
- (id)clusteringIdentifier;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (unsigned long long)hash;
- (id)initWithMemberAnnotations:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)memberAnnotations;
- (void)setClusteringIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
