//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface FBSSLPinningVerifier : NSObject
//{
//    struct unique_ptr<proxygen::httpclient::CertificatePinner, std::__1::default_delete<proxygen::httpclient::CertificatePinner>> _pinner;
//    struct unique_ptr<proxygen::httpclient::CertificatePinner, std::__1::default_delete<proxygen::httpclient::CertificatePinner>> _sandboxPinner;
//}

+ (id)sharedVerifier;
- (_Bool)checkPinning:(id)arg1;
- (id)init;

@end

