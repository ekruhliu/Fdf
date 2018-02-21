/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 14:54:37 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/06 14:54:37 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include "libft/libft.h"
# include <stdio.h>

# define WIRINA 1200
# define VISOTA 1000
# define Z matrix->coord[i].z
# define X matrix->coord[i].x
# define Y matrix->coord[i].y
# define SEC_X matrix->coord_2->x
# define SEC_Y matrix->coord_2->y
# define SEC_X0 matrix->coord_2->x0
# define SEC_Y0 matrix->coord_2->y0
# define SEC_X1 matrix->coord_2->x1
# define SEC_Y1 matrix->coord_2->y1
# define RED matrix->coord[i].red
# define GREEN matrix->coord[i].green
# define BLUE matrix->coord[i].blue
# define LEN_X matrix->chars_x
# define LEN_Y matrix->lines_y
# define SIZE_MAP matrix->size_map
# define DATA_ADDR_1 matrix->img->image, &matrix->img->bits
# define DATA_ADDR_2 &matrix->img->size_line, &matrix->img->end

typedef struct	s_coord
{
	double	z;
	double	x;
	double	y;
	double	new_x;
	double	new_y;
	int		red;
	int		green;
	int		blue;
}				t_coord;

typedef struct	s_coord_2
{
	double	x;
	double	y;
	double	x0;
	double	x1;
	double	y0;
	double	y1;
}				t_coord_2;

typedef struct	s_img
{
	int		bits;
	int		size_line;
	int		end;
	char	*line;
	void	*image;
}				t_img;

typedef struct	s_matrix
{
	void		*mlx;
	void		*win;
	int			size_map;
	double		chars_x;
	double		lines_y;
	t_coord		*coord;
	t_coord_2	*coord_2;
	t_img		*img;
}				t_matrix;

int				exit_x(void);
void			create_image(t_matrix *matrix);
void			count_lines(char *argv, t_matrix	*matrix);
void			count_chars(char *argv, t_matrix	*matrix);
void			reader(char *argv, t_matrix	*matrix);
void			find_coord(t_matrix	*matrix, char **coordinate, double mult);
void			color_and_coord(t_matrix *matrix, char **coordinate, double mult);
void			open_window(t_matrix *matrix);
double			ft_angle_cos(double x, double y);
double			ft_beta(double x, double y);
void			projection(t_matrix *matrix, int i);
void			ft_fill_line(t_matrix *matrix, int i);
void			pixel_line(t_matrix *matrix, int i);
void			draw_lines_x(t_matrix *matrix, int i);
void			draw_lines_y(t_matrix *matrix, int i);
int				klavochka(int keycode, t_matrix *matrix);
void			drawing(t_matrix *matrix);
void			filling_color(int i, t_matrix *matrix, char *coordinate);
char			**make_coordinate(char *argv);
char			*read_file(char *argv);
int				ft_atoi_hex(char *coordinate);
void			op(t_matrix *matrix);
void			turning_x(t_matrix *matrix);
void			turning_y(t_matrix *matrix);
void			turning_z(t_matrix *matrix);
void			turning_x_rev(t_matrix *matrix);
void			turning_y_rev(t_matrix *matrix);
void			turning_z_rev(t_matrix *matrix);
void			zoom_plus(t_matrix *matrix);
void			zoom_minus(t_matrix *matrix);
void			growth_up(t_matrix *matrix);
void			growth_down(t_matrix *matrix);
void			up(t_matrix *matrix);
void			down(t_matrix *matrix);
void			left(t_matrix *matrix);
void			right(t_matrix *matrix);
void			upper_left_corner(t_matrix *matrix);
void			upper_right_corner(t_matrix *matrix);
void			lower_left_corner(t_matrix *matrix);
void			lower_right_corner(t_matrix *matrix);

#endif
