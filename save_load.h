#ifndef _NVMEVIRT_TOY_H
#define _NVMEVIRT_TOY_H

#include "nvmev.h"
#include "conv_ftl.h"
#include "ssd.h"
#include "pqueue/pqueue.h"

void SAVE_LOAD_INIT(struct nvmev * nvmev);
int save_device(struct nvmev_dev *nvmev_vdev, const char * root);
int load_device(struct nvmev_dev *nvmev_vdev, const char * root);
void SAVE_LOAD_EXIT(void);

#endif
