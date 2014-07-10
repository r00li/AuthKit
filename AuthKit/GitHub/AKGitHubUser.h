//
//  AKGitHubUser.h
//  Pods
//
//  Created by Dal Rupnik on 10/07/14.
//
//

#import "JSONModel.h"

@interface AKGitHubUser : JSONModel

@property (nonatomic, strong) NSString* login;
@property (nonatomic) NSInteger id;
@property (nonatomic, strong) NSString* avatar_url;
@property (nonatomic, strong) NSString* gravatar_id;
@property (nonatomic, strong) NSString* url;
@property (nonatomic, strong) NSString* html_url;
@property (nonatomic, strong) NSString* followers_url;
@property (nonatomic, strong) NSString* following_url;
@property (nonatomic, strong) NSString* gists_url;
@property (nonatomic, strong) NSString* starred_url;
@property (nonatomic, strong) NSString* subscriptions_url;
@property (nonatomic, strong) NSString* organizations_url;
@property (nonatomic, strong) NSString* repos_url;
@property (nonatomic, strong) NSString* events_url;
@property (nonatomic, strong) NSString* received_events_url;
@property (nonatomic, strong) NSString* type;
@property (nonatomic) BOOL site_admin;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* company;
@property (nonatomic, strong) NSString* blog;
@property (nonatomic, strong) NSString* location;
@property (nonatomic, strong) NSString* email;
@property (nonatomic) BOOL hireable;
@property (nonatomic, strong) NSString* bio;
@property (nonatomic) NSInteger public_repos;
@property (nonatomic) NSInteger public_gists;
@property (nonatomic) NSInteger followers;
@property (nonatomic) NSInteger following;
@property (nonatomic, strong) NSDate* created_at;
@property (nonatomic, strong) NSDate* updated_at;

@end
