## 2025-09-19 — Intro + OpenGL Window
- [x] Created pygame window and ModernGL 3.3 core context; event loop; FPS in title.
- GL: 3.3.0 NVIDIA 580.97 | Renderer: NVIDIA GeForce RTX 4090 Laptop GPU/PCIe/SSE2
- Observed ~2500 FPS on empty scene.
- Notes: clear-color alpha has no visible effect (opaque window backbuffer).

## 2025-09-20 — Initial Setup
- [x] Camera scaffold: position `(0,0,3)`, yaw/pitch; forward/right/up; view + projection (FOV 50°, near 0.1, far 2000).
- [x] Input: mouse look; WASD movement; vertical via **Q/E** (flycam); sprint with **LShift ×2**.
- [x] Movement is **time-based** (units/sec). Tuned `PLAYER_SPEED ≈ 10.0`; sprint multiplier = 2.0.
- [x] MVP pipeline: `m_proj`, `m_view`, `m_model` uniforms set via `prog['name'].write(...)` (PyGLM matrices).
- [x] Mesh/VAO: VBO uploads as `float32` **bytes**; layout `'3f 3f'` bound to `in_position`, `in_color`.
- Fixes/quirks:
  - ModernGL uniform **indexing** (use `prog['u']`, not `prog('u')`).
  - Use `GL_SHADING_LANGUAGE_VERSION` key when printing GLSL version.
  - Quad looked huge until camera moved to `z=3` (perspective ∝ 1/distance).

## 2025-09-20 — Chunk (3D simplex)
- [x] Added 3D simplex noise fill for voxels (caves-like volume).
- Rule: solid if `noise3(x,y,z)*FREQ >= THRESH` (current FREQ=0.10, THRESH=0.0).
- Using `glm.simplex` (unseeded). **TODO:** switch to `opensimplex.OpenSimplex(seed)` for reproducible worlds.