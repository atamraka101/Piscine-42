/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:35:52 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 18:00:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_MAP_H
# define READ_MAP_H

typedef struct	s_mapkey {
	char		empty;
	char		obstacle;
	char		fill;
	int			line_count;
	int			line_length;
}				t_mapkey;

void			ft_putchar(int fd, char c);
void			ft_putstr(int fd, char *str);
void			ft_putnbr(int fd, int nb);
char			*ft_strcpy(char *dest, char *src);
int				ft_strcat(char *target, char *source);
void			read_files(int count, char **files);
void			read_stdin(void);
int				parse_map(int fd, char ***map, t_mapkey **key);
int				parse_lines(int fd, char **map, t_mapkey *key);
int				read_key(int fd, t_mapkey *key);
int				read_first_line(int fd, char **map, t_mapkey *key);
char			*read_map_line(int fd, int line_size);
int				check_key(char ch, t_mapkey *key);
char			ft_getchar(int fd);
int				ft_getbuf(int fd, char *buf, int buf_size);
int				ft_strlen(char *str);
void			free_str_arr(char **str_arr);
char			*ft_strcpy(char *dest, char *src);
void			free_cache(int **cache, t_mapkey *key);
int				ft_atoi(char *str);
int				skip_whitespace(char *str);
int				check_score(int i, int j, int value, int **cache);
int				min_three(int nb1, int nb2, int nb3);
void			update_high_score(int i, int j, int new_score, t_mapkey *key);
void			fill_map(char **map, t_mapkey *key);
void			print_map(char **map);
int				solve_map(char **map, t_mapkey *key);
#endif
