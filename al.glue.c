#include "allegro5/allegro.h"

uint32_t al$get_allegro_version()
{
	return al_get_allegro_version();
}
int al$run_main(int argc, char ** argv, int (*fun)(int, char **))
{
	return al_run_main(argc, argv, fun);
}
double al$get_time()
{
	return al_get_time();
}
void al$rest(double seconds)
{
	return al_rest(seconds);
}
void al$init_timeout(ALLEGRO_TIMEOUT * timeout, double seconds)
{
	return al_init_timeout(timeout, seconds);
}
ALLEGRO_COLOR al$map_rgb(unsigned char r, unsigned char g, unsigned char b)
{
	return al_map_rgb(r, g, b);
}
ALLEGRO_COLOR al$map_rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	return al_map_rgba(r, g, b, a);
}
ALLEGRO_COLOR al$map_rgb_f(float r, float g, float b)
{
	return al_map_rgb_f(r, g, b);
}
ALLEGRO_COLOR al$map_rgba_f(float r, float g, float b, float a)
{
	return al_map_rgba_f(r, g, b, a);
}
ALLEGRO_COLOR al$premul_rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	return al_premul_rgba(r, g, b, a);
}
ALLEGRO_COLOR al$premul_rgba_f(float r, float g, float b, float a)
{
	return al_premul_rgba_f(r, g, b, a);
}
void al$unmap_rgb(ALLEGRO_COLOR color, unsigned char * r, unsigned char * g, unsigned char * b)
{
	return al_unmap_rgb(color, r, g, b);
}
void al$unmap_rgba(ALLEGRO_COLOR color, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char * a)
{
	return al_unmap_rgba(color, r, g, b, a);
}
void al$unmap_rgb_f(ALLEGRO_COLOR color, float * r, float * g, float * b)
{
	return al_unmap_rgb_f(color, r, g, b);
}
void al$unmap_rgba_f(ALLEGRO_COLOR color, float * r, float * g, float * b, float * a)
{
	return al_unmap_rgba_f(color, r, g, b, a);
}
int al$get_pixel_size(int format)
{
	return al_get_pixel_size(format);
}
int al$get_pixel_format_bits(int format)
{
	return al_get_pixel_format_bits(format);
}
int al$get_pixel_block_size(int format)
{
	return al_get_pixel_block_size(format);
}
int al$get_pixel_block_width(int format)
{
	return al_get_pixel_block_width(format);
}
int al$get_pixel_block_height(int format)
{
	return al_get_pixel_block_height(format);
}
void al$set_new_bitmap_format(int format)
{
	return al_set_new_bitmap_format(format);
}
void al$set_new_bitmap_flags(int flags)
{
	return al_set_new_bitmap_flags(flags);
}
int al$get_new_bitmap_format()
{
	return al_get_new_bitmap_format();
}
int al$get_new_bitmap_flags()
{
	return al_get_new_bitmap_flags();
}
void al$add_new_bitmap_flag(int flag)
{
	return al_add_new_bitmap_flag(flag);
}
int al$get_bitmap_width(ALLEGRO_BITMAP * bitmap)
{
	return al_get_bitmap_width(bitmap);
}
int al$get_bitmap_height(ALLEGRO_BITMAP * bitmap)
{
	return al_get_bitmap_height(bitmap);
}
int al$get_bitmap_format(ALLEGRO_BITMAP * bitmap)
{
	return al_get_bitmap_format(bitmap);
}
int al$get_bitmap_flags(ALLEGRO_BITMAP * bitmap)
{
	return al_get_bitmap_flags(bitmap);
}
ALLEGRO_BITMAP * al$create_bitmap(int w, int h)
{
	return al_create_bitmap(w, h);
}
void al$destroy_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_destroy_bitmap(bitmap);
}
void al$put_pixel(int x, int y, ALLEGRO_COLOR color)
{
	return al_put_pixel(x, y, color);
}
void al$put_blended_pixel(int x, int y, ALLEGRO_COLOR color)
{
	return al_put_blended_pixel(x, y, color);
}
ALLEGRO_COLOR al$get_pixel(ALLEGRO_BITMAP * bitmap, int x, int y)
{
	return al_get_pixel(bitmap, x, y);
}
void al$convert_mask_to_alpha(ALLEGRO_BITMAP * bitmap, ALLEGRO_COLOR mask_color)
{
	return al_convert_mask_to_alpha(bitmap, mask_color);
}
void al$set_clipping_rectangle(int x, int y, int width, int height)
{
	return al_set_clipping_rectangle(x, y, width, height);
}
void al$reset_clipping_rectangle()
{
	return al_reset_clipping_rectangle();
}
void al$get_clipping_rectangle(int * x, int * y, int * w, int * h)
{
	return al_get_clipping_rectangle(x, y, w, h);
}
ALLEGRO_BITMAP * al$create_sub_bitmap(ALLEGRO_BITMAP * parent, int x, int y, int w, int h)
{
	return al_create_sub_bitmap(parent, x, y, w, h);
}
int al$is_sub_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_is_sub_bitmap(bitmap);
}
ALLEGRO_BITMAP * al$get_parent_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_get_parent_bitmap(bitmap);
}
int al$get_bitmap_x(ALLEGRO_BITMAP * bitmap)
{
	return al_get_bitmap_x(bitmap);
}
int al$get_bitmap_y(ALLEGRO_BITMAP * bitmap)
{
	return al_get_bitmap_y(bitmap);
}
void al$reparent_bitmap(ALLEGRO_BITMAP * bitmap, ALLEGRO_BITMAP * parent, int x, int y, int w, int h)
{
	return al_reparent_bitmap(bitmap, parent, x, y, w, h);
}
ALLEGRO_BITMAP * al$clone_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_clone_bitmap(bitmap);
}
void al$convert_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_convert_bitmap(bitmap);
}
void al$convert_memory_bitmaps()
{
	return al_convert_memory_bitmaps();
}
void al$draw_bitmap(ALLEGRO_BITMAP * bitmap, float dx, float dy, int flags)
{
	return al_draw_bitmap(bitmap, dx, dy, flags);
}
void al$draw_bitmap_region(ALLEGRO_BITMAP * bitmap, float sx, float sy, float sw, float sh, float dx, float dy, int flags)
{
	return al_draw_bitmap_region(bitmap, sx, sy, sw, sh, dx, dy, flags);
}
void al$draw_scaled_bitmap(ALLEGRO_BITMAP * bitmap, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh, int flags)
{
	return al_draw_scaled_bitmap(bitmap, sx, sy, sw, sh, dx, dy, dw, dh, flags);
}
void al$draw_rotated_bitmap(ALLEGRO_BITMAP * bitmap, float cx, float cy, float dx, float dy, float angle, int flags)
{
	return al_draw_rotated_bitmap(bitmap, cx, cy, dx, dy, angle, flags);
}
void al$draw_scaled_rotated_bitmap(ALLEGRO_BITMAP * bitmap, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags)
{
	return al_draw_scaled_rotated_bitmap(bitmap, cx, cy, dx, dy, xscale, yscale, angle, flags);
}
void al$draw_tinted_bitmap(ALLEGRO_BITMAP * bitmap, ALLEGRO_COLOR tint, float dx, float dy, int flags)
{
	return al_draw_tinted_bitmap(bitmap, tint, dx, dy, flags);
}
void al$draw_tinted_bitmap_region(ALLEGRO_BITMAP * bitmap, ALLEGRO_COLOR tint, float sx, float sy, float sw, float sh, float dx, float dy, int flags)
{
	return al_draw_tinted_bitmap_region(bitmap, tint, sx, sy, sw, sh, dx, dy, flags);
}
void al$draw_tinted_scaled_bitmap(ALLEGRO_BITMAP * bitmap, ALLEGRO_COLOR tint, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh, int flags)
{
	return al_draw_tinted_scaled_bitmap(bitmap, tint, sx, sy, sw, sh, dx, dy, dw, dh, flags);
}
void al$draw_tinted_rotated_bitmap(ALLEGRO_BITMAP * bitmap, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float angle, int flags)
{
	return al_draw_tinted_rotated_bitmap(bitmap, tint, cx, cy, dx, dy, angle, flags);
}
void al$draw_tinted_scaled_rotated_bitmap(ALLEGRO_BITMAP * bitmap, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags)
{
	return al_draw_tinted_scaled_rotated_bitmap(bitmap, tint, cx, cy, dx, dy, xscale, yscale, angle, flags);
}
void al$draw_tinted_scaled_rotated_bitmap_region(ALLEGRO_BITMAP * bitmap, float sx, float sy, float sw, float sh, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags)
{
	return al_draw_tinted_scaled_rotated_bitmap_region(bitmap, sx, sy, sw, sh, tint, cx, cy, dx, dy, xscale, yscale, angle, flags);
}
ALLEGRO_PATH * al$create_path(const char * str)
{
	return al_create_path(str);
}
ALLEGRO_PATH * al$create_path_for_directory(const char * str)
{
	return al_create_path_for_directory(str);
}
ALLEGRO_PATH * al$clone_path(const ALLEGRO_PATH * path)
{
	return al_clone_path(path);
}
int al$get_path_num_components(const ALLEGRO_PATH * path)
{
	return al_get_path_num_components(path);
}
const char * al$get_path_component(const ALLEGRO_PATH * path, int i)
{
	return al_get_path_component(path, i);
}
void al$replace_path_component(ALLEGRO_PATH * path, int i, const char * s)
{
	return al_replace_path_component(path, i, s);
}
void al$remove_path_component(ALLEGRO_PATH * path, int i)
{
	return al_remove_path_component(path, i);
}
void al$insert_path_component(ALLEGRO_PATH * path, int i, const char * s)
{
	return al_insert_path_component(path, i, s);
}
const char * al$get_path_tail(const ALLEGRO_PATH * path)
{
	return al_get_path_tail(path);
}
void al$drop_path_tail(ALLEGRO_PATH * path)
{
	return al_drop_path_tail(path);
}
void al$append_path_component(ALLEGRO_PATH * path, const char * s)
{
	return al_append_path_component(path, s);
}
int al$join_paths(ALLEGRO_PATH * path, const ALLEGRO_PATH * tail)
{
	return al_join_paths(path, tail);
}
int al$rebase_path(const ALLEGRO_PATH * head, ALLEGRO_PATH * tail)
{
	return al_rebase_path(head, tail);
}
const char * al$path_cstr(const ALLEGRO_PATH * path, char delim)
{
	return al_path_cstr(path, delim);
}
void al$destroy_path(ALLEGRO_PATH * path)
{
	return al_destroy_path(path);
}
void al$set_path_drive(ALLEGRO_PATH * path, const char * drive)
{
	return al_set_path_drive(path, drive);
}
const char * al$get_path_drive(const ALLEGRO_PATH * path)
{
	return al_get_path_drive(path);
}
void al$set_path_filename(ALLEGRO_PATH * path, const char * filename)
{
	return al_set_path_filename(path, filename);
}
const char * al$get_path_filename(const ALLEGRO_PATH * path)
{
	return al_get_path_filename(path);
}
const char * al$get_path_extension(const ALLEGRO_PATH * path)
{
	return al_get_path_extension(path);
}
int al$set_path_extension(ALLEGRO_PATH * path, const char * extension)
{
	return al_set_path_extension(path, extension);
}
const char * al$get_path_basename(const ALLEGRO_PATH * path)
{
	return al_get_path_basename(path);
}
int al$make_path_canonical(ALLEGRO_PATH * path)
{
	return al_make_path_canonical(path);
}
ALLEGRO_USTR * al$ustr_new(const char * s)
{
	return al_ustr_new(s);
}
ALLEGRO_USTR * al$ustr_new_from_buffer(const char * s, int size)
{
	return al_ustr_new_from_buffer(s, size);
}
ALLEGRO_USTR * al$ustr_newf(const char * fmt)
{
	return al_ustr_newf(fmt);
}
void al$ustr_free(ALLEGRO_USTR * us)
{
	return al_ustr_free(us);
}
const char * al$cstr(const ALLEGRO_USTR * us)
{
	return al_cstr(us);
}
void al$ustr_to_buffer(const ALLEGRO_USTR * us, char * buffer, int size)
{
	return al_ustr_to_buffer(us, buffer, size);
}
char * al$cstr_dup(const ALLEGRO_USTR * us)
{
	return al_cstr_dup(us);
}
ALLEGRO_USTR * al$ustr_dup(const ALLEGRO_USTR * us)
{
	return al_ustr_dup(us);
}
ALLEGRO_USTR * al$ustr_dup_substr(const ALLEGRO_USTR * us, int start_pos, int end_pos)
{
	return al_ustr_dup_substr(us, start_pos, end_pos);
}
const ALLEGRO_USTR * al$ustr_empty_string()
{
	return al_ustr_empty_string();
}
const ALLEGRO_USTR * al$ref_cstr(ALLEGRO_USTR_INFO * info, const char * s)
{
	return al_ref_cstr(info, s);
}
const ALLEGRO_USTR * al$ref_buffer(ALLEGRO_USTR_INFO * info, const char * s, int size)
{
	return al_ref_buffer(info, s, size);
}
const ALLEGRO_USTR * al$ref_ustr(ALLEGRO_USTR_INFO * info, const ALLEGRO_USTR * us, int start_pos, int end_pos)
{
	return al_ref_ustr(info, us, start_pos, end_pos);
}
int al$ustr_size(const ALLEGRO_USTR * us)
{
	return al_ustr_size(us);
}
int al$ustr_length(const ALLEGRO_USTR * us)
{
	return al_ustr_length(us);
}
int al$ustr_offset(const ALLEGRO_USTR * us, int index)
{
	return al_ustr_offset(us, index);
}
int al$ustr_next(const ALLEGRO_USTR * us, int * pos)
{
	return al_ustr_next(us, pos);
}
int al$ustr_prev(const ALLEGRO_USTR * us, int * pos)
{
	return al_ustr_prev(us, pos);
}
int32_t al$ustr_get(const ALLEGRO_USTR * us, int pos)
{
	return al_ustr_get(us, pos);
}
int32_t al$ustr_get_next(const ALLEGRO_USTR * us, int * pos)
{
	return al_ustr_get_next(us, pos);
}
int32_t al$ustr_prev_get(const ALLEGRO_USTR * us, int * pos)
{
	return al_ustr_prev_get(us, pos);
}
int al$ustr_insert(ALLEGRO_USTR * us1, int pos, const ALLEGRO_USTR * us2)
{
	return al_ustr_insert(us1, pos, us2);
}
int al$ustr_insert_cstr(ALLEGRO_USTR * us, int pos, const char * us2)
{
	return al_ustr_insert_cstr(us, pos, us2);
}
int al$ustr_insert_chr(ALLEGRO_USTR * us, int pos, int32_t c)
{
	return al_ustr_insert_chr(us, pos, c);
}
int al$ustr_append(ALLEGRO_USTR * us1, const ALLEGRO_USTR * us2)
{
	return al_ustr_append(us1, us2);
}
int al$ustr_append_cstr(ALLEGRO_USTR * us, const char * s)
{
	return al_ustr_append_cstr(us, s);
}
int al$ustr_append_chr(ALLEGRO_USTR * us, int32_t c)
{
	return al_ustr_append_chr(us, c);
}
int al$ustr_appendf(ALLEGRO_USTR * us, const char * fmt)
{
	return al_ustr_appendf(us, fmt);
}
int al$ustr_vappendf(ALLEGRO_USTR * us, const char * fmt, int ap)
{
	return al_ustr_vappendf(us, fmt, ap);
}
int al$ustr_remove_chr(ALLEGRO_USTR * us, int pos)
{
	return al_ustr_remove_chr(us, pos);
}
int al$ustr_remove_range(ALLEGRO_USTR * us, int start_pos, int end_pos)
{
	return al_ustr_remove_range(us, start_pos, end_pos);
}
int al$ustr_truncate(ALLEGRO_USTR * us, int start_pos)
{
	return al_ustr_truncate(us, start_pos);
}
int al$ustr_ltrim_ws(ALLEGRO_USTR * us)
{
	return al_ustr_ltrim_ws(us);
}
int al$ustr_rtrim_ws(ALLEGRO_USTR * us)
{
	return al_ustr_rtrim_ws(us);
}
int al$ustr_trim_ws(ALLEGRO_USTR * us)
{
	return al_ustr_trim_ws(us);
}
int al$ustr_assign(ALLEGRO_USTR * us1, const ALLEGRO_USTR * us2)
{
	return al_ustr_assign(us1, us2);
}
int al$ustr_assign_substr(ALLEGRO_USTR * us1, const ALLEGRO_USTR * us2, int start_pos, int end_pos)
{
	return al_ustr_assign_substr(us1, us2, start_pos, end_pos);
}
int al$ustr_assign_cstr(ALLEGRO_USTR * us1, const char * s)
{
	return al_ustr_assign_cstr(us1, s);
}
int al$ustr_set_chr(ALLEGRO_USTR * us, int pos, int32_t c)
{
	return al_ustr_set_chr(us, pos, c);
}
int al$ustr_replace_range(ALLEGRO_USTR * us1, int start_pos1, int end_pos1, const ALLEGRO_USTR * us2)
{
	return al_ustr_replace_range(us1, start_pos1, end_pos1, us2);
}
int al$ustr_find_chr(const ALLEGRO_USTR * us, int start_pos, int32_t c)
{
	return al_ustr_find_chr(us, start_pos, c);
}
int al$ustr_rfind_chr(const ALLEGRO_USTR * us, int start_pos, int32_t c)
{
	return al_ustr_rfind_chr(us, start_pos, c);
}
int al$ustr_find_set(const ALLEGRO_USTR * us, int start_pos, const ALLEGRO_USTR * accept)
{
	return al_ustr_find_set(us, start_pos, accept);
}
int al$ustr_find_set_cstr(const ALLEGRO_USTR * us, int start_pos, const char * accept)
{
	return al_ustr_find_set_cstr(us, start_pos, accept);
}
int al$ustr_find_cset(const ALLEGRO_USTR * us, int start_pos, const ALLEGRO_USTR * reject)
{
	return al_ustr_find_cset(us, start_pos, reject);
}
int al$ustr_find_cset_cstr(const ALLEGRO_USTR * us, int start_pos, const char * reject)
{
	return al_ustr_find_cset_cstr(us, start_pos, reject);
}
int al$ustr_find_str(const ALLEGRO_USTR * haystack, int start_pos, const ALLEGRO_USTR * needle)
{
	return al_ustr_find_str(haystack, start_pos, needle);
}
int al$ustr_find_cstr(const ALLEGRO_USTR * haystack, int start_pos, const char * needle)
{
	return al_ustr_find_cstr(haystack, start_pos, needle);
}
int al$ustr_rfind_str(const ALLEGRO_USTR * haystack, int start_pos, const ALLEGRO_USTR * needle)
{
	return al_ustr_rfind_str(haystack, start_pos, needle);
}
int al$ustr_rfind_cstr(const ALLEGRO_USTR * haystack, int start_pos, const char * needle)
{
	return al_ustr_rfind_cstr(haystack, start_pos, needle);
}
int al$ustr_find_replace(ALLEGRO_USTR * us, int start_pos, const ALLEGRO_USTR * find, const ALLEGRO_USTR * replace)
{
	return al_ustr_find_replace(us, start_pos, find, replace);
}
int al$ustr_find_replace_cstr(ALLEGRO_USTR * us, int start_pos, const char * find, const char * replace)
{
	return al_ustr_find_replace_cstr(us, start_pos, find, replace);
}
int al$ustr_equal(const ALLEGRO_USTR * us1, const ALLEGRO_USTR * us2)
{
	return al_ustr_equal(us1, us2);
}
int al$ustr_compare(const ALLEGRO_USTR * u, const ALLEGRO_USTR * v)
{
	return al_ustr_compare(u, v);
}
int al$ustr_ncompare(const ALLEGRO_USTR * us1, const ALLEGRO_USTR * us2, int n)
{
	return al_ustr_ncompare(us1, us2, n);
}
int al$ustr_has_prefix(const ALLEGRO_USTR * u, const ALLEGRO_USTR * v)
{
	return al_ustr_has_prefix(u, v);
}
int al$ustr_has_prefix_cstr(const ALLEGRO_USTR * u, const char * s)
{
	return al_ustr_has_prefix_cstr(u, s);
}
int al$ustr_has_suffix(const ALLEGRO_USTR * u, const ALLEGRO_USTR * v)
{
	return al_ustr_has_suffix(u, v);
}
int al$ustr_has_suffix_cstr(const ALLEGRO_USTR * us1, const char * s)
{
	return al_ustr_has_suffix_cstr(us1, s);
}
int al$utf8_width(int32_t c)
{
	return al_utf8_width(c);
}
int al$utf8_encode(char * s, int32_t c)
{
	return al_utf8_encode(s, c);
}
ALLEGRO_USTR * al$ustr_new_from_utf16(const uint16_t * s)
{
	return al_ustr_new_from_utf16(s);
}
int al$ustr_size_utf16(const ALLEGRO_USTR * us)
{
	return al_ustr_size_utf16(us);
}
int al$ustr_encode_utf16(const ALLEGRO_USTR * us, uint16_t * s, int n)
{
	return al_ustr_encode_utf16(us, s, n);
}
int al$utf16_width(int c)
{
	return al_utf16_width(c);
}
int al$utf16_encode(uint16_t s[], int32_t c)
{
	return al_utf16_encode(s, c);
}
ALLEGRO_FILE * al$fopen(const char * path, const char * mode)
{
	return al_fopen(path, mode);
}
ALLEGRO_FILE * al$fopen_interface(const ALLEGRO_FILE_INTERFACE * vt, const char * path, const char * mode)
{
	return al_fopen_interface(vt, path, mode);
}
ALLEGRO_FILE * al$create_file_handle(const ALLEGRO_FILE_INTERFACE * vt, void * userdata)
{
	return al_create_file_handle(vt, userdata);
}
int al$fclose(ALLEGRO_FILE * f)
{
	return al_fclose(f);
}
int al$fread(ALLEGRO_FILE * f, void * ptr, int size)
{
	return al_fread(f, ptr, size);
}
int al$fwrite(ALLEGRO_FILE * f, const void * ptr, int size)
{
	return al_fwrite(f, ptr, size);
}
int al$fflush(ALLEGRO_FILE * f)
{
	return al_fflush(f);
}
int64_t al$ftell(ALLEGRO_FILE * f)
{
	return al_ftell(f);
}
int al$fseek(ALLEGRO_FILE * f, int64_t offset, int whence)
{
	return al_fseek(f, offset, whence);
}
int al$feof(ALLEGRO_FILE * f)
{
	return al_feof(f);
}
int al$ferror(ALLEGRO_FILE * f)
{
	return al_ferror(f);
}
const char * al$ferrmsg(ALLEGRO_FILE * f)
{
	return al_ferrmsg(f);
}
void al$fclearerr(ALLEGRO_FILE * f)
{
	return al_fclearerr(f);
}
int al$fungetc(ALLEGRO_FILE * f, int c)
{
	return al_fungetc(f, c);
}
int64_t al$fsize(ALLEGRO_FILE * f)
{
	return al_fsize(f);
}
int al$fgetc(ALLEGRO_FILE * f)
{
	return al_fgetc(f);
}
int al$fputc(ALLEGRO_FILE * f, int c)
{
	return al_fputc(f, c);
}
int16_t al$fread16le(ALLEGRO_FILE * f)
{
	return al_fread16le(f);
}
int16_t al$fread16be(ALLEGRO_FILE * f)
{
	return al_fread16be(f);
}
int al$fwrite16le(ALLEGRO_FILE * f, int16_t w)
{
	return al_fwrite16le(f, w);
}
int al$fwrite16be(ALLEGRO_FILE * f, int16_t w)
{
	return al_fwrite16be(f, w);
}
int32_t al$fread32le(ALLEGRO_FILE * f)
{
	return al_fread32le(f);
}
int32_t al$fread32be(ALLEGRO_FILE * f)
{
	return al_fread32be(f);
}
int al$fwrite32le(ALLEGRO_FILE * f, int32_t l)
{
	return al_fwrite32le(f, l);
}
int al$fwrite32be(ALLEGRO_FILE * f, int32_t l)
{
	return al_fwrite32be(f, l);
}
char * al$fgets(ALLEGRO_FILE * f, char *const p, int max)
{
	return al_fgets(f, p, max);
}
ALLEGRO_USTR * al$fget_ustr(ALLEGRO_FILE * f)
{
	return al_fget_ustr(f);
}
int al$fputs(ALLEGRO_FILE * f, const char * p)
{
	return al_fputs(f, p);
}
int al$fprintf(ALLEGRO_FILE * f, const char * format)
{
	return al_fprintf(f, format);
}
int al$vfprintf(ALLEGRO_FILE * f, const char * format, int args)
{
	return al_vfprintf(f, format, args);
}
ALLEGRO_FILE * al$fopen_fd(int fd, const char * mode)
{
	return al_fopen_fd(fd, mode);
}
ALLEGRO_FILE * al$make_temp_file(const char * tmpl, ALLEGRO_PATH ** ret_path)
{
	return al_make_temp_file(tmpl, ret_path);
}
ALLEGRO_FILE * al$fopen_slice(ALLEGRO_FILE * fp, int initial_size, const char * mode)
{
	return al_fopen_slice(fp, initial_size, mode);
}
const ALLEGRO_FILE_INTERFACE * al$get_new_file_interface()
{
	return al_get_new_file_interface();
}
void al$set_new_file_interface(const ALLEGRO_FILE_INTERFACE * file_interface)
{
	return al_set_new_file_interface(file_interface);
}
void al$set_standard_file_interface()
{
	return al_set_standard_file_interface();
}
void * al$get_file_userdata(ALLEGRO_FILE * f)
{
	return al_get_file_userdata(f);
}
int al$register_bitmap_loader(const char * ext, ALLEGRO_IIO_LOADER_FUNCTION loader)
{
	return al_register_bitmap_loader(ext, loader);
}
int al$register_bitmap_saver(const char * ext, int saver)
{
	return al_register_bitmap_saver(ext, saver);
}
int al$register_bitmap_loader_f(const char * ext, ALLEGRO_IIO_FS_LOADER_FUNCTION fs_loader)
{
	return al_register_bitmap_loader_f(ext, fs_loader);
}
int al$register_bitmap_saver_f(const char * ext, ALLEGRO_IIO_FS_SAVER_FUNCTION fs_saver)
{
	return al_register_bitmap_saver_f(ext, fs_saver);
}
int al$register_bitmap_identifier(const char * ext, ALLEGRO_IIO_IDENTIFIER_FUNCTION identifier)
{
	return al_register_bitmap_identifier(ext, identifier);
}
ALLEGRO_BITMAP * al$load_bitmap(const char * filename)
{
	return al_load_bitmap(filename);
}
ALLEGRO_BITMAP * al$load_bitmap_flags(const char * filename, int flags)
{
	return al_load_bitmap_flags(filename, flags);
}
ALLEGRO_BITMAP * al$load_bitmap_f(ALLEGRO_FILE * fp, const char * ident)
{
	return al_load_bitmap_f(fp, ident);
}
ALLEGRO_BITMAP * al$load_bitmap_flags_f(ALLEGRO_FILE * fp, const char * ident, int flags)
{
	return al_load_bitmap_flags_f(fp, ident, flags);
}
int al$save_bitmap(const char * filename, ALLEGRO_BITMAP * bitmap)
{
	return al_save_bitmap(filename, bitmap);
}
int al$save_bitmap_f(ALLEGRO_FILE * fp, const char * ident, ALLEGRO_BITMAP * bitmap)
{
	return al_save_bitmap_f(fp, ident, bitmap);
}
const char * al$identify_bitmap_f(ALLEGRO_FILE * fp)
{
	return al_identify_bitmap_f(fp);
}
const char * al$identify_bitmap(const char * filename)
{
	return al_identify_bitmap(filename);
}
ALLEGRO_LOCKED_REGION * al$lock_bitmap(ALLEGRO_BITMAP * bitmap, int format, int flags)
{
	return al_lock_bitmap(bitmap, format, flags);
}
ALLEGRO_LOCKED_REGION * al$lock_bitmap_region(ALLEGRO_BITMAP * bitmap, int x, int y, int width, int height, int format, int flags)
{
	return al_lock_bitmap_region(bitmap, x, y, width, height, format, flags);
}
ALLEGRO_LOCKED_REGION * al$lock_bitmap_blocked(ALLEGRO_BITMAP * bitmap, int flags)
{
	return al_lock_bitmap_blocked(bitmap, flags);
}
ALLEGRO_LOCKED_REGION * al$lock_bitmap_region_blocked(ALLEGRO_BITMAP * bitmap, int x_block, int y_block, int width_block, int height_block, int flags)
{
	return al_lock_bitmap_region_blocked(bitmap, x_block, y_block, width_block, height_block, flags);
}
void al$unlock_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_unlock_bitmap(bitmap);
}
int al$is_bitmap_locked(ALLEGRO_BITMAP * bitmap)
{
	return al_is_bitmap_locked(bitmap);
}
void al$set_blender(int op, int source, int dest)
{
	return al_set_blender(op, source, dest);
}
void al$set_blend_color(ALLEGRO_COLOR color)
{
	return al_set_blend_color(color);
}
void al$get_blender(int * op, int * source, int * dest)
{
	return al_get_blender(op, source, dest);
}
ALLEGRO_COLOR al$get_blend_color()
{
	return al_get_blend_color();
}
void al$set_separate_blender(int op, int source, int dest, int alpha_op, int alpha_source, int alpha_dest)
{
	return al_set_separate_blender(op, source, dest, alpha_op, alpha_source, alpha_dest);
}
void al$get_separate_blender(int * op, int * source, int * dest, int * alpha_op, int * alpha_src, int * alpha_dest)
{
	return al_get_separate_blender(op, source, dest, alpha_op, alpha_src, alpha_dest);
}
void al$init_user_event_source(ALLEGRO_EVENT_SOURCE * arg0)
{
	return al_init_user_event_source(arg0);
}
void al$destroy_user_event_source(ALLEGRO_EVENT_SOURCE * arg0)
{
	return al_destroy_user_event_source(arg0);
}
int al$emit_user_event(ALLEGRO_EVENT_SOURCE * arg0, ALLEGRO_EVENT * arg1, void (* dtor)(ALLEGRO_USER_EVENT *))
{
	return al_emit_user_event(arg0, arg1, dtor);
}
void al$unref_user_event(ALLEGRO_USER_EVENT * arg0)
{
	return al_unref_user_event(arg0);
}
void al$set_event_source_data(ALLEGRO_EVENT_SOURCE * arg0, intptr_t data)
{
	return al_set_event_source_data(arg0, data);
}
intptr_t al$get_event_source_data(const ALLEGRO_EVENT_SOURCE * arg0)
{
	return al_get_event_source_data(arg0);
}
ALLEGRO_EVENT_QUEUE * al$create_event_queue()
{
	return al_create_event_queue();
}
void al$destroy_event_queue(ALLEGRO_EVENT_QUEUE * arg0)
{
	return al_destroy_event_queue(arg0);
}
int al$is_event_source_registered(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT_SOURCE * arg1)
{
	return al_is_event_source_registered(arg0, arg1);
}
void al$register_event_source(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT_SOURCE * arg1)
{
	return al_register_event_source(arg0, arg1);
}
void al$unregister_event_source(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT_SOURCE * arg1)
{
	return al_unregister_event_source(arg0, arg1);
}
void al$pause_event_queue(ALLEGRO_EVENT_QUEUE * arg0, bool arg1)
{
	return al_pause_event_queue(arg0, arg1);
}
int al$is_event_queue_paused(const ALLEGRO_EVENT_QUEUE * arg0)
{
	return al_is_event_queue_paused(arg0);
}
int al$is_event_queue_empty(ALLEGRO_EVENT_QUEUE * arg0)
{
	return al_is_event_queue_empty(arg0);
}
int al$get_next_event(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT * ret_event)
{
	return al_get_next_event(arg0, ret_event);
}
int al$peek_next_event(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT * ret_event)
{
	return al_peek_next_event(arg0, ret_event);
}
int al$drop_next_event(ALLEGRO_EVENT_QUEUE * arg0)
{
	return al_drop_next_event(arg0);
}
void al$flush_event_queue(ALLEGRO_EVENT_QUEUE * arg0)
{
	return al_flush_event_queue(arg0);
}
void al$wait_for_event(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT * ret_event)
{
	return al_wait_for_event(arg0, ret_event);
}
int al$wait_for_event_timed(ALLEGRO_EVENT_QUEUE * arg0, ALLEGRO_EVENT * ret_event, float secs)
{
	return al_wait_for_event_timed(arg0, ret_event, secs);
}
int al$wait_for_event_until(ALLEGRO_EVENT_QUEUE * queue, ALLEGRO_EVENT * ret_event, ALLEGRO_TIMEOUT * timeout)
{
	return al_wait_for_event_until(queue, ret_event, timeout);
}
void al$set_new_display_refresh_rate(int refresh_rate)
{
	return al_set_new_display_refresh_rate(refresh_rate);
}
void al$set_new_display_flags(int flags)
{
	return al_set_new_display_flags(flags);
}
int al$get_new_display_refresh_rate()
{
	return al_get_new_display_refresh_rate();
}
int al$get_new_display_flags()
{
	return al_get_new_display_flags();
}
void al$set_new_window_title(const char * title)
{
	return al_set_new_window_title(title);
}
const char * al$get_new_window_title()
{
	return al_get_new_window_title();
}
int al$get_display_width(ALLEGRO_DISPLAY * display)
{
	return al_get_display_width(display);
}
int al$get_display_height(ALLEGRO_DISPLAY * display)
{
	return al_get_display_height(display);
}
int al$get_display_format(ALLEGRO_DISPLAY * display)
{
	return al_get_display_format(display);
}
int al$get_display_refresh_rate(ALLEGRO_DISPLAY * display)
{
	return al_get_display_refresh_rate(display);
}
int al$get_display_flags(ALLEGRO_DISPLAY * display)
{
	return al_get_display_flags(display);
}
int al$get_display_orientation(ALLEGRO_DISPLAY * display)
{
	return al_get_display_orientation(display);
}
int al$set_display_flag(ALLEGRO_DISPLAY * display, int flag, bool onoff)
{
	return al_set_display_flag(display, flag, onoff);
}
ALLEGRO_DISPLAY * al$create_display(int w, int h)
{
	return al_create_display(w, h);
}
void al$destroy_display(ALLEGRO_DISPLAY * display)
{
	return al_destroy_display(display);
}
ALLEGRO_DISPLAY * al$get_current_display()
{
	return al_get_current_display();
}
void al$set_target_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_set_target_bitmap(bitmap);
}
void al$set_target_backbuffer(ALLEGRO_DISPLAY * display)
{
	return al_set_target_backbuffer(display);
}
ALLEGRO_BITMAP * al$get_backbuffer(ALLEGRO_DISPLAY * display)
{
	return al_get_backbuffer(display);
}
ALLEGRO_BITMAP * al$get_target_bitmap()
{
	return al_get_target_bitmap();
}
int al$acknowledge_resize(ALLEGRO_DISPLAY * display)
{
	return al_acknowledge_resize(display);
}
int al$resize_display(ALLEGRO_DISPLAY * display, int width, int height)
{
	return al_resize_display(display, width, height);
}
void al$flip_display()
{
	return al_flip_display();
}
void al$update_display_region(int x, int y, int width, int height)
{
	return al_update_display_region(x, y, width, height);
}
int al$is_compatible_bitmap(ALLEGRO_BITMAP * bitmap)
{
	return al_is_compatible_bitmap(bitmap);
}
int al$wait_for_vsync()
{
	return al_wait_for_vsync();
}
ALLEGRO_EVENT_SOURCE * al$get_display_event_source(ALLEGRO_DISPLAY * display)
{
	return al_get_display_event_source(display);
}
void al$set_display_icon(ALLEGRO_DISPLAY * display, ALLEGRO_BITMAP * icon)
{
	return al_set_display_icon(display, icon);
}
void al$set_display_icons(ALLEGRO_DISPLAY * display, int num_icons, ALLEGRO_BITMAP ** icons)
{
	return al_set_display_icons(display, num_icons, icons);
}
int al$get_new_display_adapter()
{
	return al_get_new_display_adapter();
}
void al$set_new_display_adapter(int adapter)
{
	return al_set_new_display_adapter(adapter);
}
void al$set_new_window_position(int x, int y)
{
	return al_set_new_window_position(x, y);
}
void al$get_new_window_position(int * x, int * y)
{
	return al_get_new_window_position(x, y);
}
void al$set_window_position(ALLEGRO_DISPLAY * display, int x, int y)
{
	return al_set_window_position(display, x, y);
}
void al$get_window_position(ALLEGRO_DISPLAY * display, int * x, int * y)
{
	return al_get_window_position(display, x, y);
}
int al$set_window_constraints(ALLEGRO_DISPLAY * display, int min_w, int min_h, int max_w, int max_h)
{
	return al_set_window_constraints(display, min_w, min_h, max_w, max_h);
}
int al$get_window_constraints(ALLEGRO_DISPLAY * display, int * min_w, int * min_h, int * max_w, int * max_h)
{
	return al_get_window_constraints(display, min_w, min_h, max_w, max_h);
}
void al$set_window_title(ALLEGRO_DISPLAY * display, const char * title)
{
	return al_set_window_title(display, title);
}
void al$set_new_display_option(int option, int value, int importance)
{
	return al_set_new_display_option(option, value, importance);
}
int al$get_new_display_option(int option, int * importance)
{
	return al_get_new_display_option(option, importance);
}
void al$reset_new_display_options()
{
	return al_reset_new_display_options();
}
void al$set_display_option(ALLEGRO_DISPLAY * display, int option, int value)
{
	return al_set_display_option(display, option, value);
}
int al$get_display_option(ALLEGRO_DISPLAY * display, int option)
{
	return al_get_display_option(display, option);
}
void al$hold_bitmap_drawing(bool hold)
{
	return al_hold_bitmap_drawing(hold);
}
int al$is_bitmap_drawing_held()
{
	return al_is_bitmap_drawing_held();
}
void al$acknowledge_drawing_halt(ALLEGRO_DISPLAY * display)
{
	return al_acknowledge_drawing_halt(display);
}
void al$acknowledge_drawing_resume(ALLEGRO_DISPLAY * display)
{
	return al_acknowledge_drawing_resume(display);
}
char * al$get_clipboard_text(ALLEGRO_DISPLAY * display)
{
	return al_get_clipboard_text(display);
}
int al$set_clipboard_text(ALLEGRO_DISPLAY * display, const char * text)
{
	return al_set_clipboard_text(display, text);
}
int al$clipboard_has_text(ALLEGRO_DISPLAY * display)
{
	return al_clipboard_has_text(display);
}
ALLEGRO_CONFIG * al$create_config()
{
	return al_create_config();
}
void al$add_config_section(ALLEGRO_CONFIG * config, const char * name)
{
	return al_add_config_section(config, name);
}
void al$set_config_value(ALLEGRO_CONFIG * config, const char * section, const char * key, const char * value)
{
	return al_set_config_value(config, section, key, value);
}
void al$add_config_comment(ALLEGRO_CONFIG * config, const char * section, const char * comment)
{
	return al_add_config_comment(config, section, comment);
}
const char * al$get_config_value(const ALLEGRO_CONFIG * config, const char * section, const char * key)
{
	return al_get_config_value(config, section, key);
}
ALLEGRO_CONFIG * al$load_config_file(const char * filename)
{
	return al_load_config_file(filename);
}
ALLEGRO_CONFIG * al$load_config_file_f(ALLEGRO_FILE * filename)
{
	return al_load_config_file_f(filename);
}
int al$save_config_file(const char * filename, const ALLEGRO_CONFIG * config)
{
	return al_save_config_file(filename, config);
}
int al$save_config_file_f(ALLEGRO_FILE * file, const ALLEGRO_CONFIG * config)
{
	return al_save_config_file_f(file, config);
}
void al$merge_config_into(ALLEGRO_CONFIG * master, const ALLEGRO_CONFIG * add)
{
	return al_merge_config_into(master, add);
}
ALLEGRO_CONFIG * al$merge_config(const ALLEGRO_CONFIG * cfg1, const ALLEGRO_CONFIG * cfg2)
{
	return al_merge_config(cfg1, cfg2);
}
void al$destroy_config(ALLEGRO_CONFIG * config)
{
	return al_destroy_config(config);
}
int al$remove_config_section(ALLEGRO_CONFIG * config, const char * section)
{
	return al_remove_config_section(config, section);
}
int al$remove_config_key(ALLEGRO_CONFIG * config, const char * section, const char * key)
{
	return al_remove_config_key(config, section, key);
}
const char * al$get_first_config_section(const ALLEGRO_CONFIG * config, ALLEGRO_CONFIG_SECTION ** iterator)
{
	return al_get_first_config_section(config, iterator);
}
const char * al$get_next_config_section(ALLEGRO_CONFIG_SECTION ** iterator)
{
	return al_get_next_config_section(iterator);
}
const char * al$get_first_config_entry(const ALLEGRO_CONFIG * config, const char * section, ALLEGRO_CONFIG_ENTRY ** iterator)
{
	return al_get_first_config_entry(config, section, iterator);
}
const char * al$get_next_config_entry(ALLEGRO_CONFIG_ENTRY ** iterator)
{
	return al_get_next_config_entry(iterator);
}
int al$get_cpu_count()
{
	return al_get_cpu_count();
}
int al$get_ram_size()
{
	return al_get_ram_size();
}
void al$register_assert_handler(void (*handler)(const char *, const char *, int, const char *))
{
	return al_register_assert_handler(handler);
}
void al$register_trace_handler(void (* handler)(const char *))
{
	return al_register_trace_handler(handler);
}
void al$clear_to_color(ALLEGRO_COLOR color)
{
	return al_clear_to_color(color);
}
void al$clear_depth_buffer(float x)
{
	return al_clear_depth_buffer(x);
}
void al$draw_pixel(float x, float y, ALLEGRO_COLOR color)
{
	return al_draw_pixel(x, y, color);
}
int al$get_errno()
{
	return al_get_errno();
}
void al$set_errno(int errnum)
{
	return al_set_errno(errnum);
}
al_fixed al$fixsqrt(al_fixed x)
{
	return al_fixsqrt(x);
}
al_fixed al$fixhypot(al_fixed x, al_fixed y)
{
	return al_fixhypot(x, y);
}
al_fixed al$fixatan(al_fixed x)
{
	return al_fixatan(x);
}
al_fixed al$fixatan2(al_fixed y, al_fixed x)
{
	return al_fixatan2(y, x);
}
ALLEGRO_FS_ENTRY * al$create_fs_entry(const char * path)
{
	return al_create_fs_entry(path);
}
void al$destroy_fs_entry(ALLEGRO_FS_ENTRY * e)
{
	return al_destroy_fs_entry(e);
}
const char * al$get_fs_entry_name(ALLEGRO_FS_ENTRY * e)
{
	return al_get_fs_entry_name(e);
}
int al$update_fs_entry(ALLEGRO_FS_ENTRY * e)
{
	return al_update_fs_entry(e);
}
uint32_t al$get_fs_entry_mode(ALLEGRO_FS_ENTRY * e)
{
	return al_get_fs_entry_mode(e);
}
time_t al$get_fs_entry_atime(ALLEGRO_FS_ENTRY * e)
{
	return al_get_fs_entry_atime(e);
}
time_t al$get_fs_entry_mtime(ALLEGRO_FS_ENTRY * e)
{
	return al_get_fs_entry_mtime(e);
}
time_t al$get_fs_entry_ctime(ALLEGRO_FS_ENTRY * e)
{
	return al_get_fs_entry_ctime(e);
}
off_t al$get_fs_entry_size(ALLEGRO_FS_ENTRY * e)
{
	return al_get_fs_entry_size(e);
}
int al$fs_entry_exists(ALLEGRO_FS_ENTRY * e)
{
	return al_fs_entry_exists(e);
}
int al$remove_fs_entry(ALLEGRO_FS_ENTRY * e)
{
	return al_remove_fs_entry(e);
}
int al$open_directory(ALLEGRO_FS_ENTRY * e)
{
	return al_open_directory(e);
}
ALLEGRO_FS_ENTRY * al$read_directory(ALLEGRO_FS_ENTRY * e)
{
	return al_read_directory(e);
}
int al$close_directory(ALLEGRO_FS_ENTRY * e)
{
	return al_close_directory(e);
}
int al$filename_exists(const char * path)
{
	return al_filename_exists(path);
}
int al$remove_filename(const char * path)
{
	return al_remove_filename(path);
}
char * al$get_current_directory()
{
	return al_get_current_directory();
}
int al$change_directory(const char * path)
{
	return al_change_directory(path);
}
int al$make_directory(const char * path)
{
	return al_make_directory(path);
}
ALLEGRO_FILE * al$open_fs_entry(ALLEGRO_FS_ENTRY * e, const char * mode)
{
	return al_open_fs_entry(e, mode);
}
int al$for_each_fs_entry(ALLEGRO_FS_ENTRY * dir, int (*callback)(ALLEGRO_FS_ENTRY *, void *), void * extra)
{
	return al_for_each_fs_entry(dir, callback, extra);
}
const ALLEGRO_FS_INTERFACE * al$get_fs_interface()
{
	return al_get_fs_interface();
}
void al$set_fs_interface(const ALLEGRO_FS_INTERFACE * vtable)
{
	return al_set_fs_interface(vtable);
}
void al$set_standard_fs_interface()
{
	return al_set_standard_fs_interface();
}
int al$get_num_display_modes()
{
	return al_get_num_display_modes();
}
ALLEGRO_DISPLAY_MODE * al$get_display_mode(int index, ALLEGRO_DISPLAY_MODE * mode)
{
	return al_get_display_mode(index, mode);
}
int al$install_joystick()
{
	return al_install_joystick();
}
void al$uninstall_joystick()
{
	return al_uninstall_joystick();
}
int al$is_joystick_installed()
{
	return al_is_joystick_installed();
}
int al$reconfigure_joysticks()
{
	return al_reconfigure_joysticks();
}
int al$get_num_joysticks()
{
	return al_get_num_joysticks();
}
ALLEGRO_JOYSTICK * al$get_joystick(int joyn)
{
	return al_get_joystick(joyn);
}
void al$release_joystick(ALLEGRO_JOYSTICK * arg0)
{
	return al_release_joystick(arg0);
}
int al$get_joystick_active(ALLEGRO_JOYSTICK * arg0)
{
	return al_get_joystick_active(arg0);
}
const char * al$get_joystick_name(ALLEGRO_JOYSTICK * arg0)
{
	return al_get_joystick_name(arg0);
}
int al$get_joystick_num_sticks(ALLEGRO_JOYSTICK * arg0)
{
	return al_get_joystick_num_sticks(arg0);
}
int al$get_joystick_stick_flags(ALLEGRO_JOYSTICK * arg0, int stick)
{
	return al_get_joystick_stick_flags(arg0, stick);
}
const char * al$get_joystick_stick_name(ALLEGRO_JOYSTICK * arg0, int stick)
{
	return al_get_joystick_stick_name(arg0, stick);
}
int al$get_joystick_num_axes(ALLEGRO_JOYSTICK * arg0, int stick)
{
	return al_get_joystick_num_axes(arg0, stick);
}
const char * al$get_joystick_axis_name(ALLEGRO_JOYSTICK * arg0, int stick, int axis)
{
	return al_get_joystick_axis_name(arg0, stick, axis);
}
int al$get_joystick_num_buttons(ALLEGRO_JOYSTICK * arg0)
{
	return al_get_joystick_num_buttons(arg0);
}
const char * al$get_joystick_button_name(ALLEGRO_JOYSTICK * arg0, int buttonn)
{
	return al_get_joystick_button_name(arg0, buttonn);
}
void al$get_joystick_state(ALLEGRO_JOYSTICK * arg0, ALLEGRO_JOYSTICK_STATE * ret_state)
{
	return al_get_joystick_state(arg0, ret_state);
}
ALLEGRO_EVENT_SOURCE * al$get_joystick_event_source()
{
	return al_get_joystick_event_source();
}
int al$is_keyboard_installed()
{
	return al_is_keyboard_installed();
}
int al$install_keyboard()
{
	return al_install_keyboard();
}
void al$uninstall_keyboard()
{
	return al_uninstall_keyboard();
}
int al$set_keyboard_leds(int leds)
{
	return al_set_keyboard_leds(leds);
}
const char * al$keycode_to_name(int keycode)
{
	return al_keycode_to_name(keycode);
}
void al$get_keyboard_state(ALLEGRO_KEYBOARD_STATE * ret_state)
{
	return al_get_keyboard_state(ret_state);
}
int al$key_down(const ALLEGRO_KEYBOARD_STATE * arg0, int keycode)
{
	return al_key_down(arg0, keycode);
}
ALLEGRO_EVENT_SOURCE * al$get_keyboard_event_source()
{
	return al_get_keyboard_event_source();
}
int al$is_mouse_installed()
{
	return al_is_mouse_installed();
}
int al$install_mouse()
{
	return al_install_mouse();
}
void al$uninstall_mouse()
{
	return al_uninstall_mouse();
}
unsigned int al$get_mouse_num_buttons()
{
	return al_get_mouse_num_buttons();
}
unsigned int al$get_mouse_num_axes()
{
	return al_get_mouse_num_axes();
}
int al$set_mouse_xy(struct ALLEGRO_DISPLAY * display, int x, int y)
{
	return al_set_mouse_xy(display, x, y);
}
int al$set_mouse_z(int z)
{
	return al_set_mouse_z(z);
}
int al$set_mouse_w(int w)
{
	return al_set_mouse_w(w);
}
int al$set_mouse_axis(int axis, int value)
{
	return al_set_mouse_axis(axis, value);
}
void al$get_mouse_state(ALLEGRO_MOUSE_STATE * ret_state)
{
	return al_get_mouse_state(ret_state);
}
int al$mouse_button_down(const ALLEGRO_MOUSE_STATE * state, int button)
{
	return al_mouse_button_down(state, button);
}
int al$get_mouse_state_axis(const ALLEGRO_MOUSE_STATE * state, int axis)
{
	return al_get_mouse_state_axis(state, axis);
}
int al$get_mouse_cursor_position(int * ret_x, int * ret_y)
{
	return al_get_mouse_cursor_position(ret_x, ret_y);
}
int al$grab_mouse(struct ALLEGRO_DISPLAY * display)
{
	return al_grab_mouse(display);
}
int al$ungrab_mouse()
{
	return al_ungrab_mouse();
}
void al$set_mouse_wheel_precision(int precision)
{
	return al_set_mouse_wheel_precision(precision);
}
int al$get_mouse_wheel_precision()
{
	return al_get_mouse_wheel_precision();
}
ALLEGRO_EVENT_SOURCE * al$get_mouse_event_source()
{
	return al_get_mouse_event_source();
}
int al$is_touch_input_installed()
{
	return al_is_touch_input_installed();
}
int al$install_touch_input()
{
	return al_install_touch_input();
}
void al$uninstall_touch_input()
{
	return al_uninstall_touch_input();
}
void al$get_touch_input_state(ALLEGRO_TOUCH_INPUT_STATE * ret_state)
{
	return al_get_touch_input_state(ret_state);
}
ALLEGRO_EVENT_SOURCE * al$get_touch_input_event_source()
{
	return al_get_touch_input_event_source();
}
void al$set_memory_interface(ALLEGRO_MEMORY_INTERFACE * iface)
{
	return al_set_memory_interface(iface);
}
void * al$malloc_with_context(int n, int line, const char * file, const char * func)
{
	return al_malloc_with_context(n, line, file, func);
}
void al$free_with_context(void * ptr, int line, const char * file, const char * func)
{
	return al_free_with_context(ptr, line, file, func);
}
void * al$realloc_with_context(void * ptr, int n, int line, const char * file, const char * func)
{
	return al_realloc_with_context(ptr, n, line, file, func);
}
void * al$calloc_with_context(int count, int n, int line, const char * file, const char * func)
{
	return al_calloc_with_context(count, n, line, file, func);
}
int al$get_num_video_adapters()
{
	return al_get_num_video_adapters();
}
int al$get_monitor_info(int adapter, ALLEGRO_MONITOR_INFO * info)
{
	return al_get_monitor_info(adapter, info);
}
ALLEGRO_MOUSE_CURSOR * al$create_mouse_cursor(struct ALLEGRO_BITMAP * sprite, int xfocus, int yfocus)
{
	return al_create_mouse_cursor(sprite, xfocus, yfocus);
}
void al$destroy_mouse_cursor(ALLEGRO_MOUSE_CURSOR * arg0)
{
	return al_destroy_mouse_cursor(arg0);
}
int al$set_mouse_cursor(struct ALLEGRO_DISPLAY * display, ALLEGRO_MOUSE_CURSOR * cursor)
{
	return al_set_mouse_cursor(display, cursor);
}
int al$set_system_mouse_cursor(struct ALLEGRO_DISPLAY * display, ALLEGRO_SYSTEM_MOUSE_CURSOR cursor_id)
{
	return al_set_system_mouse_cursor(display, cursor_id);
}
int al$show_mouse_cursor(struct ALLEGRO_DISPLAY * display)
{
	return al_show_mouse_cursor(display);
}
int al$hide_mouse_cursor(struct ALLEGRO_DISPLAY * display)
{
	return al_hide_mouse_cursor(display);
}
void al$set_render_state(ALLEGRO_RENDER_STATE state, int value)
{
	return al_set_render_state(state, value);
}
void al$use_transform(const ALLEGRO_TRANSFORM * trans)
{
	return al_use_transform(trans);
}
void al$use_projection_transform(const ALLEGRO_TRANSFORM * trans)
{
	return al_use_projection_transform(trans);
}
void al$copy_transform(ALLEGRO_TRANSFORM * dest, const ALLEGRO_TRANSFORM * src)
{
	return al_copy_transform(dest, src);
}
void al$identity_transform(ALLEGRO_TRANSFORM * trans)
{
	return al_identity_transform(trans);
}
void al$build_transform(ALLEGRO_TRANSFORM * trans, float x, float y, float sx, float sy, float theta)
{
	return al_build_transform(trans, x, y, sx, sy, theta);
}
void al$build_camera_transform(ALLEGRO_TRANSFORM * trans, float position_x, float position_y, float position_z, float look_x, float look_y, float look_z, float up_x, float up_y, float up_z)
{
	return al_build_camera_transform(trans, position_x, position_y, position_z, look_x, look_y, look_z, up_x, up_y, up_z);
}
void al$translate_transform(ALLEGRO_TRANSFORM * trans, float x, float y)
{
	return al_translate_transform(trans, x, y);
}
void al$translate_transform_3d(ALLEGRO_TRANSFORM * trans, float x, float y, float z)
{
	return al_translate_transform_3d(trans, x, y, z);
}
void al$rotate_transform(ALLEGRO_TRANSFORM * trans, float theta)
{
	return al_rotate_transform(trans, theta);
}
void al$rotate_transform_3d(ALLEGRO_TRANSFORM * trans, float x, float y, float z, float angle)
{
	return al_rotate_transform_3d(trans, x, y, z, angle);
}
void al$scale_transform(ALLEGRO_TRANSFORM * trans, float sx, float sy)
{
	return al_scale_transform(trans, sx, sy);
}
void al$scale_transform_3d(ALLEGRO_TRANSFORM * trans, float sx, float sy, float sz)
{
	return al_scale_transform_3d(trans, sx, sy, sz);
}
void al$transform_coordinates(const ALLEGRO_TRANSFORM * trans, float * x, float * y)
{
	return al_transform_coordinates(trans, x, y);
}
void al$transform_coordinates_3d(const ALLEGRO_TRANSFORM * trans, float * x, float * y, float * z)
{
	return al_transform_coordinates_3d(trans, x, y, z);
}
void al$compose_transform(ALLEGRO_TRANSFORM * trans, const ALLEGRO_TRANSFORM * other)
{
	return al_compose_transform(trans, other);
}
const ALLEGRO_TRANSFORM * al$get_current_transform()
{
	return al_get_current_transform();
}
const ALLEGRO_TRANSFORM * al$get_current_inverse_transform()
{
	return al_get_current_inverse_transform();
}
const ALLEGRO_TRANSFORM * al$get_current_projection_transform()
{
	return al_get_current_projection_transform();
}
void al$invert_transform(ALLEGRO_TRANSFORM * trans)
{
	return al_invert_transform(trans);
}
int al$check_inverse(const ALLEGRO_TRANSFORM * trans, float tol)
{
	return al_check_inverse(trans, tol);
}
void al$orthographic_transform(ALLEGRO_TRANSFORM * trans, float left, float top, float n, float right, float bottom, float f)
{
	return al_orthographic_transform(trans, left, top, n, right, bottom, f);
}
void al$perspective_transform(ALLEGRO_TRANSFORM * trans, float left, float top, float n, float right, float bottom, float f)
{
	return al_perspective_transform(trans, left, top, n, right, bottom, f);
}
void al$horizontal_shear_transform(ALLEGRO_TRANSFORM * trans, float theta)
{
	return al_horizontal_shear_transform(trans, theta);
}
void al$vertical_shear_transform(ALLEGRO_TRANSFORM * trans, float theta)
{
	return al_vertical_shear_transform(trans, theta);
}
ALLEGRO_SHADER * al$create_shader(ALLEGRO_SHADER_PLATFORM platform)
{
	return al_create_shader(platform);
}
int al$attach_shader_source(ALLEGRO_SHADER * shader, ALLEGRO_SHADER_TYPE type, const char * source)
{
	return al_attach_shader_source(shader, type, source);
}
int al$attach_shader_source_file(ALLEGRO_SHADER * shader, ALLEGRO_SHADER_TYPE type, const char * filename)
{
	return al_attach_shader_source_file(shader, type, filename);
}
int al$build_shader(ALLEGRO_SHADER * shader)
{
	return al_build_shader(shader);
}
const char * al$get_shader_log(ALLEGRO_SHADER * shader)
{
	return al_get_shader_log(shader);
}
ALLEGRO_SHADER_PLATFORM al$get_shader_platform(ALLEGRO_SHADER * shader)
{
	return al_get_shader_platform(shader);
}
int al$use_shader(ALLEGRO_SHADER * shader)
{
	return al_use_shader(shader);
}
void al$destroy_shader(ALLEGRO_SHADER * shader)
{
	return al_destroy_shader(shader);
}
int al$set_shader_sampler(const char * name, ALLEGRO_BITMAP * bitmap, int unit)
{
	return al_set_shader_sampler(name, bitmap, unit);
}
int al$set_shader_matrix(const char * name, const ALLEGRO_TRANSFORM * matrix)
{
	return al_set_shader_matrix(name, matrix);
}
int al$set_shader_int(const char * name, int i)
{
	return al_set_shader_int(name, i);
}
int al$set_shader_float(const char * name, float f)
{
	return al_set_shader_float(name, f);
}
int al$set_shader_int_vector(const char * name, int num_components, const int * i, int num_elems)
{
	return al_set_shader_int_vector(name, num_components, i, num_elems);
}
int al$set_shader_float_vector(const char * name, int num_components, const float * f, int num_elems)
{
	return al_set_shader_float_vector(name, num_components, f, num_elems);
}
int al$set_shader_bool(const char * name, bool b)
{
	return al_set_shader_bool(name, b);
}
const char * al$get_default_shader_source(ALLEGRO_SHADER_PLATFORM platform, ALLEGRO_SHADER_TYPE type)
{
	return al_get_default_shader_source(platform, type);
}
int al$install_system(int version, int (* atexit_ptr)(void (*)(void)))
{
	return al_install_system(version, atexit_ptr);
}
void al$uninstall_system()
{
	return al_uninstall_system();
}
int al$is_system_installed()
{
	return al_is_system_installed();
}
ALLEGRO_SYSTEM * al$get_system_driver()
{
	return al_get_system_driver();
}
ALLEGRO_CONFIG * al$get_system_config()
{
	return al_get_system_config();
}
ALLEGRO_PATH * al$get_standard_path(int id)
{
	return al_get_standard_path(id);
}
void al$set_exe_name(const char * path)
{
	return al_set_exe_name(path);
}
void al$set_org_name(const char * org_name)
{
	return al_set_org_name(org_name);
}
void al$set_app_name(const char * app_name)
{
	return al_set_app_name(app_name);
}
const char * al$get_org_name()
{
	return al_get_org_name();
}
const char * al$get_app_name()
{
	return al_get_app_name();
}
int al$inhibit_screensaver(bool inhibit)
{
	return al_inhibit_screensaver(inhibit);
}
ALLEGRO_THREAD * al$create_thread(void *(* proc)(ALLEGRO_THREAD *, void *), void * arg)
{
	return al_create_thread(proc, arg);
}
void al$start_thread(ALLEGRO_THREAD * outer)
{
	return al_start_thread(outer);
}
void al$join_thread(ALLEGRO_THREAD * outer, void ** ret_value)
{
	return al_join_thread(outer, ret_value);
}
void al$set_thread_should_stop(ALLEGRO_THREAD * outer)
{
	return al_set_thread_should_stop(outer);
}
int al$get_thread_should_stop(ALLEGRO_THREAD * outer)
{
	return al_get_thread_should_stop(outer);
}
void al$destroy_thread(ALLEGRO_THREAD * thread)
{
	return al_destroy_thread(thread);
}
void al$run_detached_thread(void *(* proc)(void *), void * arg)
{
	return al_run_detached_thread(proc, arg);
}
ALLEGRO_MUTEX * al$create_mutex()
{
	return al_create_mutex();
}
ALLEGRO_MUTEX * al$create_mutex_recursive()
{
	return al_create_mutex_recursive();
}
void al$lock_mutex(ALLEGRO_MUTEX * mutex)
{
	return al_lock_mutex(mutex);
}
void al$unlock_mutex(ALLEGRO_MUTEX * mutex)
{
	return al_unlock_mutex(mutex);
}
void al$destroy_mutex(ALLEGRO_MUTEX * mutex)
{
	return al_destroy_mutex(mutex);
}
ALLEGRO_COND * al$create_cond()
{
	return al_create_cond();
}
void al$destroy_cond(ALLEGRO_COND * cond)
{
	return al_destroy_cond(cond);
}
void al$wait_cond(ALLEGRO_COND * cond, ALLEGRO_MUTEX * mutex)
{
	return al_wait_cond(cond, mutex);
}
int al$wait_cond_until(ALLEGRO_COND * cond, ALLEGRO_MUTEX * mutex, const ALLEGRO_TIMEOUT * timeout)
{
	return al_wait_cond_until(cond, mutex, timeout);
}
void al$broadcast_cond(ALLEGRO_COND * cond)
{
	return al_broadcast_cond(cond);
}
void al$signal_cond(ALLEGRO_COND * cond)
{
	return al_signal_cond(cond);
}
ALLEGRO_TIMER * al$create_timer(double speed_secs)
{
	return al_create_timer(speed_secs);
}
void al$destroy_timer(ALLEGRO_TIMER * timer)
{
	return al_destroy_timer(timer);
}
void al$start_timer(ALLEGRO_TIMER * timer)
{
	return al_start_timer(timer);
}
void al$stop_timer(ALLEGRO_TIMER * timer)
{
	return al_stop_timer(timer);
}
void al$resume_timer(ALLEGRO_TIMER * timer)
{
	return al_resume_timer(timer);
}
int al$get_timer_started(const ALLEGRO_TIMER * timer)
{
	return al_get_timer_started(timer);
}
double al$get_timer_speed(const ALLEGRO_TIMER * timer)
{
	return al_get_timer_speed(timer);
}
void al$set_timer_speed(ALLEGRO_TIMER * timer, double speed_secs)
{
	return al_set_timer_speed(timer, speed_secs);
}
int64_t al$get_timer_count(const ALLEGRO_TIMER * timer)
{
	return al_get_timer_count(timer);
}
void al$set_timer_count(ALLEGRO_TIMER * timer, int64_t count)
{
	return al_set_timer_count(timer, count);
}
void al$add_timer_count(ALLEGRO_TIMER * timer, int64_t diff)
{
	return al_add_timer_count(timer, diff);
}
ALLEGRO_EVENT_SOURCE * al$get_timer_event_source(ALLEGRO_TIMER * timer)
{
	return al_get_timer_event_source(timer);
}
void al$store_state(ALLEGRO_STATE * state, int flags)
{
	return al_store_state(state, flags);
}
void al$restore_state(const ALLEGRO_STATE * state)
{
	return al_restore_state(state);
}
