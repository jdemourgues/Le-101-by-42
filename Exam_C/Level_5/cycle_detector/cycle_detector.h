{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl280\partightenfactor0

\f0\fs24 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 /* ************************************************************************** */\
/*                                                                            */\
/*                                                        :::      ::::::::   */\
/*   list.h                                             :+:      :+:    :+:   */\
/*                                                    +:+ +:+         +:+     */\
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */\
/*                                                +#+#+#+#+#+   +#+           */\
/*   Created: 2019/03/25 14:27:13 by fwuensch          #+#    #+#             */\
/*   Updated: 2019/03/25 15:14:43 by fwuensch         ###   ########.fr       */\
/*                                                                            */\
/* ************************************************************************** */\
\
// YOU SHOULD NOT PUSH THIS FILE\
\
#ifndef LIST_H\
# define LIST_H\
\
typedef struct     s_list\
\{\
    int            data;\
    struct s_list  *next;\
\}                  t_list;\
\
#endif\
}