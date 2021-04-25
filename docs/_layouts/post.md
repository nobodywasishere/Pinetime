---
layout: default
---

<h1> {{ page.title }} </h1>

{% if page.author %}
<h3> By {{ page.author }} </h3>
{% endif %}

{% assign words = content | number_of_words %}
<h4> {{ page.date | date: "%b %d, %Y" }} |
  {% if words < 360 %} 1 {% else %} {{ words | divided_by:180 }} {% endif %}
  minute read </h4>

<h4>Tags: {{ page.tags }}</h4>

<br>

{% if page.cover_image %}
<img src="{{ site.baseurl }}{{ page.cover_image }}">
{% endif %}


{{ content }}
