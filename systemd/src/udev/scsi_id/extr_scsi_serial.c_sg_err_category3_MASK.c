
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_hdr {int sb_len_wr; int sbp; int driver_status; int host_status; int msg_status; int status; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sg_io_hdr *VAR_0) {
        return FUNC_0(VAR_0->status, VAR_0->msg_status,
                                   VAR_0->host_status, VAR_0->driver_status,
                                   VAR_0->sbp, VAR_0->sb_len_wr);
}
