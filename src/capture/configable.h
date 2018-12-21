
#ifndef CONFIG_ABLE_H__
#define CONFIG_ABLE_H__

#define AIM_WIDTH					64
#define AIM_HEIGHT					64

#define AVT_TRK_AIM_SIZE			2

enum devvideo{
	video_gaoqing0=0,
	video_gaoqing,
	video_gaoqing2,
	video_gaoqing3,
	video_pal,
	MAX_CHAN,
};

#define BUFFER_CNT_PER_CHAN	(6)

#define MAIN_CHID					video_gaoqing
#define PAL_VIRCHID					0

#define VIDEO_DIS_WIDTH		1920
#define VIDEO_DIS_HEIGHT		1080

#define BALL_CHID			video_gaoqing
#define GUN_CHID			video_gaoqing0

#define min_width_ratio  0.2
#define max_width_ratio  0.8
#define min_height_ratio 0.2
#define max_height_ratio 0.8

extern int vcapWH[5][2];
extern int vdisWH[5][2];

#define SYS_CHN_CNT	(MAX_CHAN)
#define SYS_CHN_WIDTH(chn)		vdisWH[chn][0]//tWidth[chn]
#define SYS_CHN_HEIGHT(chn)		vdisWH[chn][1]//tHeight[chn]
#define SYS_CHN_FPS(chn)		tFPS[chn]
#define DIS_FPS		30


static int tWidth[SYS_CHN_CNT] = {1920, 1920};
static int tHeight[SYS_CHN_CNT] = {1080, 1080};
static int tFPS[SYS_CHN_CNT] = {30, 30, 30, 30, 30};


#endif
