#import "GPUImageOpenGLESContext.h"
#import "GLProgram.h"

@interface GPUImageOutput : NSObject
{
    NSMutableArray *targets;
    
    GLuint outputTexture;
    CGSize inputTextureSize, cachedMaximumOutputSize;
}

// Managing outputs
- (void)addTarget:(id<GPUImageInput>)newTarget;
- (void)removeTarget:(id<GPUImageInput>)targetToRemove;
- (void)removeAllTargets;

// Manage the output texture
- (void)initializeOutputTexture;
- (void)deleteOutputTexture;

@end
