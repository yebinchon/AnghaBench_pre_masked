
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_v4 {int response_len; scalar_t__ response; int driver_status; int transport_status; int device_status; } ;


 int FUNC_0 (int ,int ,int ,int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct sg_io_v4 *VAR_0) {
        return FUNC_0(VAR_0->device_status, 0,
                                   VAR_0->transport_status, VAR_0->driver_status,
                                   (unsigned char *)(uintptr_t)VAR_0->response,
                                   VAR_0->response_len);
}
