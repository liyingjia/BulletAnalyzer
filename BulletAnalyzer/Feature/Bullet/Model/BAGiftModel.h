//
//  BAGiftModel.h
//  BulletAnalyzer
//
//  Created by Zj on 17/6/3.
//  Copyright © 2017年 Zj. All rights reserved.
//

#import "BABasicInfoModel.h"

typedef NS_ENUM(NSUInteger, BAGiftType) {
    BAGiftTypeFishBall = 0, //鱼丸礼物 增加体重
    BAGiftTypeFreeGift = 1, //免费道具礼物 免费
    BAGiftTypeCostGift = 2, //购买道具礼物
    BAGiftTypeDeserveLevel1 = 3, //低级酬勤 15鱼翅
    BAGiftTypeDeserveLevel2 = 4, //中级酬勤 30鱼翅
    BAGiftTypeDeserveLevel3 = 5, //高级酬勤 50鱼翅
    BAGiftTypePlane = 6,    //飞机 100鱼翅
    BAGiftTypeRocket = 7    //火箭 500鱼翅
};

@interface BAGiftModel : BABasicInfoModel

/**
 礼物类型
 */
@property (nonatomic, assign) BAGiftType giftType;

/**
 赠送对象
 */
@property (nonatomic, copy) NSString *giveTo;

/**
 赠送对象
 */
@property (nonatomic, copy) NSString *bnn;

/**
 房间id
 */
@property (nonatomic, copy) NSString *rid;

/**
 弹幕分组 ID
 */
@property (nonatomic, copy) NSString *gid;

/**
 客户端类型:默认值 0(表示 web 用户)
 */
@property (nonatomic, copy) NSString *ct;

/**
 主播体重
 */
@property (nonatomic, copy) NSString *dw;

/**
 特效id
 */
@property (nonatomic, copy) NSString *eid;

/**
 礼物id
 */
@property (nonatomic, copy) NSString *gfid;

/**
 礼物显示样式 1:鱼丸 2:怂 稳 呵呵 点赞 粉丝荧光棒 辣眼睛 3:弱鸡 5:飞机 6:火箭   2 3为道具礼物
 */
@property (nonatomic, copy) NSString *gs;

/**
 猜想为道具类型
 */
@property (nonatomic, copy) NSString *bl;

/**
 连击
 */
@property (nonatomic, copy) NSString *hits;

/**
 头像(猜想)
 */
@property (nonatomic, copy) NSString *ic;

/**
 用户等级
 */
@property (nonatomic, copy) NSString *level;

/**
 昵称
 */
@property (nonatomic, copy) NSString *nn;

/**
 用户id
 */
@property (nonatomic, copy) NSString *uid;

/**
 赠送火箭用户昵称
 */
@property (nonatomic, copy) NSString *sn;

/**
 受赠火箭者昵称
 */
@property (nonatomic, copy) NSString *dn;

/**
 礼物名称
 */
@property (nonatomic, copy) NSString *gn;

/**
 礼物数量
 */
@property (nonatomic, copy) NSString *gc;

/**
 1火箭 2飞机
 */
@property (nonatomic, copy) NSString *es;

/**
 酬勤等级 1级 15鱼翅 2级30鱼翅 3级50鱼翅
 */
@property (nonatomic, copy) NSString *lev;

/**
 用户头像小
 */
@property (nonatomic, copy) NSString *iconSmall;

/**
 用户头像中
 */
@property (nonatomic, copy) NSString *iconMiddle;

/**
 用户头像大
 */
@property (nonatomic, copy) NSString *iconBig;

@end