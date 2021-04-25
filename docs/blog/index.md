---
layout: page
title: Blog
heading_anchors: false
has_children: false
nav_order: 1
---

# Latest Post

{% assign latest = site.posts | first %}

## {{ latest.title }}
{{ latest.date | date: "%b %d, %Y" }}

{{ latest.excerpt }} [Read more.]({{ site.baseurl }}{{ latest.url }})

# All Posts

{% for post in site.posts %}
<a href="{{ site.baseurl }}{{ post.url }}">{{ post.title }}</a> - {{ post.date | date: "%b %d, %Y" }}
{% endfor %}
