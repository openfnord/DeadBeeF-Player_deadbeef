/* ddbcellrenderertextmultiline.h generated by valac 0.10.2, the Vala compiler, do not modify */


#ifndef __DDBCELLRENDERERTEXTMULTILINE_H__
#define __DDBCELLRENDERERTEXTMULTILINE_H__

#include <glib.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define DDB_TYPE_CELL_EDITABLE_TEXT_VIEW (ddb_cell_editable_text_view_get_type ())
#define DDB_CELL_EDITABLE_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DDB_TYPE_CELL_EDITABLE_TEXT_VIEW, DdbCellEditableTextView))
#define DDB_CELL_EDITABLE_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DDB_TYPE_CELL_EDITABLE_TEXT_VIEW, DdbCellEditableTextViewClass))
#define DDB_IS_CELL_EDITABLE_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DDB_TYPE_CELL_EDITABLE_TEXT_VIEW))
#define DDB_IS_CELL_EDITABLE_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DDB_TYPE_CELL_EDITABLE_TEXT_VIEW))
#define DDB_CELL_EDITABLE_TEXT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DDB_TYPE_CELL_EDITABLE_TEXT_VIEW, DdbCellEditableTextViewClass))

typedef struct _DdbCellEditableTextView DdbCellEditableTextView;
typedef struct _DdbCellEditableTextViewClass DdbCellEditableTextViewClass;
typedef struct _DdbCellEditableTextViewPrivate DdbCellEditableTextViewPrivate;

#define DDB_TYPE_CELL_RENDERER_TEXT_MULTILINE (ddb_cell_renderer_text_multiline_get_type ())
#define DDB_CELL_RENDERER_TEXT_MULTILINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DDB_TYPE_CELL_RENDERER_TEXT_MULTILINE, DdbCellRendererTextMultiline))
#define DDB_CELL_RENDERER_TEXT_MULTILINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DDB_TYPE_CELL_RENDERER_TEXT_MULTILINE, DdbCellRendererTextMultilineClass))
#define DDB_IS_CELL_RENDERER_TEXT_MULTILINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DDB_TYPE_CELL_RENDERER_TEXT_MULTILINE))
#define DDB_IS_CELL_RENDERER_TEXT_MULTILINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DDB_TYPE_CELL_RENDERER_TEXT_MULTILINE))
#define DDB_CELL_RENDERER_TEXT_MULTILINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DDB_TYPE_CELL_RENDERER_TEXT_MULTILINE, DdbCellRendererTextMultilineClass))

typedef struct _DdbCellRendererTextMultiline DdbCellRendererTextMultiline;
typedef struct _DdbCellRendererTextMultilineClass DdbCellRendererTextMultilineClass;
typedef struct _DdbCellRendererTextMultilinePrivate DdbCellRendererTextMultilinePrivate;

struct _DdbCellEditableTextView {
	GtkTextView parent_instance;
	DdbCellEditableTextViewPrivate * priv;
	gboolean editing_canceled;
	char* tree_path;
};

struct _DdbCellEditableTextViewClass {
	GtkTextViewClass parent_class;
};

struct _DdbCellRendererTextMultiline {
	GtkCellRendererText parent_instance;
	DdbCellRendererTextMultilinePrivate * priv;
};

struct _DdbCellRendererTextMultilineClass {
	GtkCellRendererTextClass parent_class;
};


GType ddb_cell_editable_text_view_get_type (void) G_GNUC_CONST;
DdbCellEditableTextView* ddb_cell_editable_text_view_new (void);
DdbCellEditableTextView* ddb_cell_editable_text_view_construct (GType object_type);
GType ddb_cell_renderer_text_multiline_get_type (void) G_GNUC_CONST;
DdbCellRendererTextMultiline* ddb_cell_renderer_text_multiline_new (void);
DdbCellRendererTextMultiline* ddb_cell_renderer_text_multiline_construct (GType object_type);


G_END_DECLS

#endif
