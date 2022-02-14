
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int longitude; int latitude; } ;
struct TYPE_9__ {int title; int address; int provider; int venue_id; TYPE_3__ geo; } ;
struct TYPE_7__ {int longitude; int latitude; } ;
struct tgl_message_media {int type; int caption; int flags; int mime_type; int duration; int size; int phone; int url; int title; int description; int author; TYPE_4__ venue; struct tgl_message_media* webpage; int last_name; int first_name; TYPE_2__ geo; TYPE_1__* encr_document; struct tgl_message_media* document; int h; int w; TYPE_5__* photo; } ;
struct in_ev {int dummy; } ;
struct TYPE_10__ {int caption; } ;
struct TYPE_6__ {int flags; int caption; int mime_type; int duration; int size; int h; int w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tgl_message_media*) ;
 int FUNC_1 (struct in_ev*) ;
 int FUNC_2 (struct in_ev*,char*,...) ;
 int FUNC_3 (struct in_ev*,int ) ;
 int FUNC_4 (int) ;
void FUNC_5 (struct in_ev *VAR_5, struct tgl_message_media *VAR_6) {
  FUNC_0 (VAR_6);
  switch (VAR_6->type) {
    case 133:
      return;
    case 132:
      if (!VAR_6->photo) {
        FUNC_2 (VAR_5, "[photo bad]");
      } else if (VAR_6->photo->caption && FUNC_4 (VAR_6->photo->caption)) {
        FUNC_2 (VAR_5, "[photo %s]", VAR_6->photo->caption);
      } else {
        FUNC_2 (VAR_5, "[photo]");
      }
      if (VAR_6->caption) {
        FUNC_2 (VAR_5, " %s", VAR_6->caption);
      }
      return;
    case 136:
    case 138:
    case 129:
      FUNC_2 (VAR_5, "[");
      FUNC_0 (VAR_6->document);
      if (VAR_6->document->flags & VAR_2) {
        FUNC_2 (VAR_5, "image");
      } else if (VAR_6->document->flags & VAR_1) {
        FUNC_2 (VAR_5, "audio");
      } else if (VAR_6->document->flags & VAR_4) {
        FUNC_2 (VAR_5, "video");
      } else if (VAR_6->document->flags & VAR_3) {
        FUNC_2 (VAR_5, "sticker");
      } else {
        FUNC_2 (VAR_5, "document");
      }

      if (VAR_6->document->caption && FUNC_4 (VAR_6->document->caption)) {
        FUNC_2 (VAR_5, " %s:", VAR_6->document->caption);
      } else {
        FUNC_2 (VAR_5, ":");
      }

      if (VAR_6->document->mime_type) {
        FUNC_2 (VAR_5, " type=%s", VAR_6->document->mime_type);
      }

      if (VAR_6->document->w && VAR_6->document->h) {
        FUNC_2 (VAR_5, " size=%dx%d", VAR_6->document->w, VAR_6->document->h);
      }

      if (VAR_6->document->duration) {
        FUNC_2 (VAR_5, " duration=%d", VAR_6->document->duration);
      }

      FUNC_2 (VAR_5, " size=");
      if (VAR_6->document->size < (1 << 10)) {
        FUNC_2 (VAR_5, "%dB", VAR_6->document->size);
      } else if (VAR_6->document->size < (1 << 20)) {
        FUNC_2 (VAR_5, "%dKiB", VAR_6->document->size >> 10);
      } else if (VAR_6->document->size < (1 << 30)) {
        FUNC_2 (VAR_5, "%dMiB", VAR_6->document->size >> 20);
      } else {
        FUNC_2 (VAR_5, "%dGiB", VAR_6->document->size >> 30);
      }

      FUNC_2 (VAR_5, "]");

      if (VAR_6->caption) {
        FUNC_2 (VAR_5, " %s", VAR_6->caption);
      }

      return;
    case 135:
      FUNC_2 (VAR_5, "[");
      if (VAR_6->encr_document->flags & VAR_2) {
        FUNC_2 (VAR_5, "image");
      } else if (VAR_6->encr_document->flags & VAR_1) {
        FUNC_2 (VAR_5, "audio");
      } else if (VAR_6->encr_document->flags & VAR_4) {
        FUNC_2 (VAR_5, "video");
      } else if (VAR_6->encr_document->flags & VAR_3) {
        FUNC_2 (VAR_5, "sticker");
      } else {
        FUNC_2 (VAR_5, "document");
      }

      if (VAR_6->encr_document->caption && FUNC_4 (VAR_6->encr_document->caption)) {
        FUNC_2 (VAR_5, " %s:", VAR_6->encr_document->caption);
      } else {
        FUNC_2 (VAR_5, ":");
      }

      if (VAR_6->encr_document->mime_type) {
        FUNC_2 (VAR_5, " type=%s", VAR_6->encr_document->mime_type);
      }

      if (VAR_6->encr_document->w && VAR_6->encr_document->h) {
        FUNC_2 (VAR_5, " size=%dx%d", VAR_6->encr_document->w, VAR_6->encr_document->h);
      }

      if (VAR_6->encr_document->duration) {
        FUNC_2 (VAR_5, " duration=%d", VAR_6->encr_document->duration);
      }

      FUNC_2 (VAR_5, " size=");
      if (VAR_6->encr_document->size < (1 << 10)) {
        FUNC_2 (VAR_5, "%dB", VAR_6->encr_document->size);
      } else if (VAR_6->encr_document->size < (1 << 20)) {
        FUNC_2 (VAR_5, "%dKiB", VAR_6->encr_document->size >> 10);
      } else if (VAR_6->encr_document->size < (1 << 30)) {
        FUNC_2 (VAR_5, "%dMiB", VAR_6->encr_document->size >> 20);
      } else {
        FUNC_2 (VAR_5, "%dGiB", VAR_6->encr_document->size >> 30);
      }

      FUNC_2 (VAR_5, "]");

      return;
    case 134:
      FUNC_2 (VAR_5, "[geo https://maps.google.com/?q=%.6lf,%.6lf]", VAR_6->geo.latitude, VAR_6->geo.longitude);
      return;
    case 137:
      FUNC_2 (VAR_5, "[contact] ");
      FUNC_3 (VAR_5, VAR_0);
      FUNC_2 (VAR_5, "%s %s ", VAR_6->first_name, VAR_6->last_name);
      FUNC_1 (VAR_5);
      FUNC_2 (VAR_5, "%s", VAR_6->phone);
      return;
    case 131:
      FUNC_2 (VAR_5, "[unsupported]");
      return;
    case 128:
      FUNC_2 (VAR_5, "[webpage:");
      FUNC_0 (VAR_6->webpage);
      if (VAR_6->webpage->url) {
        FUNC_2 (VAR_5, " url:'%s'", VAR_6->webpage->url);
      }
      if (VAR_6->webpage->title) {
        FUNC_2 (VAR_5, " title:'%s'", VAR_6->webpage->title);
      }
      if (VAR_6->webpage->description) {
        FUNC_2 (VAR_5, " description:'%s'", VAR_6->webpage->description);
      }
      if (VAR_6->webpage->author) {
        FUNC_2 (VAR_5, " author:'%s'", VAR_6->webpage->author);
      }
      FUNC_2 (VAR_5, "]");
      break;
    case 130:
      FUNC_2 (VAR_5, "[geo https://maps.google.com/?q=%.6lf,%.6lf", VAR_6->venue.geo.latitude, VAR_6->venue.geo.longitude);

      if (VAR_6->venue.title) {
        FUNC_2 (VAR_5, " title:'%s'", VAR_6->venue.title);
      }

      if (VAR_6->venue.address) {
        FUNC_2 (VAR_5, " address:'%s'", VAR_6->venue.address);
      }
      if (VAR_6->venue.provider) {
        FUNC_2 (VAR_5, " provider:'%s'", VAR_6->venue.provider);
      }
      if (VAR_6->venue.venue_id) {
        FUNC_2 (VAR_5, " id:'%s'", VAR_6->venue.venue_id);
      }

      FUNC_2 (VAR_5, "]");
      return;

    default:
      FUNC_2 (VAR_5, "x = %d\n", VAR_6->type);
      FUNC_0 (0);
  }
}
