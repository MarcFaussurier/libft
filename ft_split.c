/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:36:40 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 18:29:24 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char     **protect_string(t_split_state *state)
{
    state->out = malloc(1 * sizeof(char*));
    if (!state->out)
        return (NULL);
    state->out[0] = NULL;
    return (state->out);
}

static char     **protect_delimiter(t_split_state *state, char const *s)
{
    state->out = malloc(2 * sizeof(char*));
    if (!state->out)
        return (NULL);
    state->out[0] = ft_strdup(s);
    if (!state->out[0])
        return (NULL);
    state->out[1] = NULL;
    return (state->out);
}

static t_bool	init(const char *s, char d, t_split_state *state)
{
	state->s_len = ft_strlen(s);
	state->tmp = (char*)malloc((state->s_len + 1) * sizeof(char));
	if (!state->tmp)
		return (FALSE);
	state->out = (char**)malloc(((ft_count_occ(s, d)) + 2) * sizeof(char*));
	if (!state->out)
		return (FALSE);
	state->out[0] = NULL;
	state->tmp[0] = '\0';
	state->i = -1;
	state->y = -1;
	state->nb_words = 0;
	while (s[++state->i] == d)
		;
	state->i -= 1;
	return (TRUE);
}

static t_bool	flush(t_split_state *state)
{
	state->tmp[state->y + 1] = '\0';
	state->y = -1;
	state->out[state->nb_words] = ft_strdup(state->tmp);
	if (!state->out[state->nb_words])
	{
		if (state->nb_words > 0)
			ft_free_until((void**)state->out, state->out + state->nb_words - 1);
		return (FALSE);
	}
	free(state->tmp);
	state->tmp = (char*)malloc((state->s_len + 1) * sizeof(char));
	if (!state->tmp)
	{
		ft_free_until((void**)state->out, state->out + state->nb_words);
		return (FALSE);
	}
	state->tmp[0] = '\0';
	state->nb_words += 1;
	state->out[state->nb_words] = NULL;
	return (TRUE);
}

char			**ft_split(char const *s, char d)
{
	t_split_state state;

    if (!s)
        return (protect_string(&state));
    if (!d)
        return (protect_delimiter(&state, s));
    if (!init(s, d, &state))
		return (NULL);
	while (s[++state.i])
		if (s[state.i] == d)
		{
			while (s[++state.i] == d)
				;
			state.i -= 1;
			if (!flush(&state))
				return (NULL);
		}
		else
			state.tmp[++state.y] = s[state.i];
	if (ft_strlen(state.tmp) > 0)
		if (!flush(&state))
			return (NULL);
	return (state.out);
}
