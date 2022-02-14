
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char interface_id; int mx_sb_len; int flags; int sbp; int cmdp; } ;
struct TYPE_4__ {int u; int s; } ;
struct TYPE_6__ {int quiet; int cmd; int * sense; } ;
struct scsi_cmd {TYPE_2__ sg_io; TYPE_1__ _sense; TYPE_3__ cgc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmd*,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmd *VAR_2) {
        FUNC_0(VAR_2, sizeof(struct scsi_cmd));
        VAR_2->cgc.quiet = 1;
        VAR_2->cgc.sense = &VAR_2->_sense.s;
        VAR_2->sg_io.interface_id = 'S';
        VAR_2->sg_io.mx_sb_len = sizeof(VAR_2->_sense);
        VAR_2->sg_io.cmdp = VAR_2->cgc.cmd;
        VAR_2->sg_io.sbp = VAR_2->_sense.u;
        VAR_2->sg_io.flags = VAR_1 | VAR_0;
}
