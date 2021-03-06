/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#pragma mark Named Structures

struct GSEllipse {
    struct CGPoint center;
    float majorRadius;
    float minorRadius;
    float angle;
};

struct _PurpleEventMessage {
    struct GSEllipse _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        int _field6;
    } _field2;
    struct {
        int _field1;
        unsigned int _field2;
        struct CGPoint _field3;
        struct CGPoint _field4;
        unsigned int _field5;
        unsigned long long _field6;
        void *_field7;
        int _field8;
        int _field9;
        unsigned int _field10;
        char *_field11;
    } _field3;
};

#pragma mark -

/*
 * File: /Developer/Platforms/iPhoneSimulator.platform/Developer/Applications/iPhone Simulator.app/Contents/MacOS/iPhone Simulator
 * Arch: Intel 80x86 (i386)
 *
 *       Objective-C Garbage Collection: Unsupported
 */

@interface SimulatorView : NSOpenGLView
{
}

- (id)initWithFrame:(struct _NSRect)arg1;
- (void)dealloc;
- (void)prepareOpenGL;
- (void)drawRect:(struct _NSRect)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)bitmapImageRep;
- (void)setMonitorViewController:(id)arg1;
- (void)setNeedsDisplayOnMainThread;

@end

