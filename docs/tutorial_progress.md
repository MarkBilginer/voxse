# VoxSE — Tutorial Progress (Coder Space Voxel Engine)

## Checklist
- [x] 00:00:00 Intro
- [x] 00:00:55 OpenGL Window
- [x] 00:04:33 Initial Setup
- [ ] 00:10:56 Chunk
- [ ] 00:21:13 World of Chunks
- [ ] 00:28:15 Shading
- [ ] 00:36:15 Packed Data
- [ ] 00:40:38 Interaction with Voxels
- [ ] 00:49:28 Frustum Culling
- [ ] 00:54:27 Texture Array
- [ ] 00:57:23 Terrain Generation

## Notes per section
### 00:00:55 OpenGL Window
- Outcome: pygame window + ModernGL 3.3 core context OK
- GL: `3.3.0 NVIDIA 580.97` | Renderer: `NVIDIA GeForce RTX 4090 Laptop GPU/PCIe/SSE2`
- FPS: `~2500`
- Files touched: `py/main.py`, `py/settings.py`
- Commit: `feat(py): OpenGL window + context + GL info print`
- Tag: `py-01-window`

### 00:04:33 Initial Setup
- Outcome: camera + input + MVP pipeline rendering a gradient quad
- Details:
  - Camera pos `(0,0,3)`, yaw/pitch with mouse; WASD; sprint (LShift ×2).
  - Uniforms set via `prog['m_proj'|'m_view'|'m_model'].write(...)` using PyGLM matrices.
  - VBO uses `float32` bytes; VAO `'3f 3f'` bound to `in_position`, `in_color`.
- Files touched: `py/camera.py`, `py/player.py`, `py/shader_program.py`, `py/meshes/base_mesh.py`, `py/meshes/quad_mesh.py`, `py/shaders/quad.vert`, `py/main.py`, `py/settings.py`
- Commit: `feat(py): finish initial setup — camera+input, MVP uniforms, sprint`
- Tag: `py-02-initial-setup`